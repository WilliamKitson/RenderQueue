#include "Scenes.h"

renderQueue::Scenes::Scenes()
	: count{ 0 }, index{ 0 }, data{ nullptr }
{
}

renderQueue::Scenes::~Scenes()
{
	cleanup();
}

void renderQueue::Scenes::push()
{
	increment();
	swap(pushed());
	initialise();
}

void renderQueue::Scenes::pop()
{
	decrement();
	swap(popped());
	index = 0;
}

int renderQueue::Scenes::getCount()
{
	return count / 11;
}

float renderQueue::Scenes::getXpos()
{
	return element(0);
}

float renderQueue::Scenes::getYpos()
{
	return element(1);
}

float renderQueue::Scenes::getZpos()
{
	return element(2);
}

float renderQueue::Scenes::getXrot()
{
	return element(3);
}

float renderQueue::Scenes::getYrot()
{
	return element(4);
}

float renderQueue::Scenes::getZrot()
{
	return element(5);
}

float renderQueue::Scenes::getFrustum()
{
	return element(6);
}

float renderQueue::Scenes::getRed()
{
	return element(7);
}

float renderQueue::Scenes::getGreen()
{
	return element(8);
}

float renderQueue::Scenes::getBlue()
{
	return element(9);
}

float renderQueue::Scenes::getAlpha()
{
	return element(10);
}

void renderQueue::Scenes::setIndex(int input)
{
	index = minimum(maximum(input));
}

void renderQueue::Scenes::setCamera(float input[7])
{
	try
	{
		validate();
	}
	catch (int)
	{
		return;
	}

	for (int i{ 0 }; i < 7; i++)
	{
		data[i + (index * 11)] = input[i];
	}
}

void renderQueue::Scenes::setAmbience(float input[4])
{
	try
	{
		validate();
	}
	catch (int)
	{
		return;
	}

	for (int i{ 0 }; i < 4; i++)
	{
		data[i + 7 + (index * 11)] = input[i];
	}
}

void renderQueue::Scenes::cleanup()
{
	delete[] data;
	data = nullptr;
}

void renderQueue::Scenes::increment()
{
	count += 11;
}

void renderQueue::Scenes::swap(float* input)
{
	cleanup();
	data = input;
}

float* renderQueue::Scenes::pushed()
{
	float* output = new float[count];

	for (int i{ 0 }; i < count - 11; i++)
	{
		output[i] = data[i];
	}

	return output;
}

void renderQueue::Scenes::initialise()
{
	float scene[] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		90.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};

	for (int i{ 0 }; i < 11; i++)
	{
		data[i + (count - 11)] = scene[i];
	}
}

void renderQueue::Scenes::decrement()
{
	count = minimum(count - 11);
}

float* renderQueue::Scenes::popped()
{
	float* output = new float[count];
	int unpopped = 0;

	for (int i{ 0 }; i < count; i++)
	{
		unpopped += (i == index * 11) * 11;
		output[i] = data[unpopped];
		unpopped++;
	}

	return output;
}

int renderQueue::Scenes::minimum(int input)
{
	int output = 0;

	if (input < output)
	{
		return output;
	}

	return input;
}

int renderQueue::Scenes::maximum(int input)
{
	if (input < getCount())
	{
		return input;
	}

	return 0;
}

float renderQueue::Scenes::element(int input)
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[input + (index * 11)];
}

void renderQueue::Scenes::validate()
{
	if (count)
	{
		return;
	}

	throw int();
}
