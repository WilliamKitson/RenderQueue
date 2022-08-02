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
	return count / 12;
}

int renderQueue::Scenes::getIndex()
{
	return index;
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

float renderQueue::Scenes::getDrawDistance()
{
	return element(7);
}

float renderQueue::Scenes::getRed()
{
	return element(8);
}

float renderQueue::Scenes::getGreen()
{
	return element(9);
}

float renderQueue::Scenes::getBlue()
{
	return element(10);
}

float renderQueue::Scenes::getAlpha()
{
	return element(11);
}

bool renderQueue::Scenes::getOverlap()
{
	return true;
}

void renderQueue::Scenes::setIndex(int input)
{
	index = minimum(maximum(input));
}

void renderQueue::Scenes::setCamera(float input[8])
{
	try
	{
		validate();
	}
	catch (int)
	{
		return;
	}

	camera(input);
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

	ambience(input);
}

void renderQueue::Scenes::cleanup()
{
	delete[] data;
	data = nullptr;
}

void renderQueue::Scenes::increment()
{
	count += 12;
}

void renderQueue::Scenes::swap(float* input)
{
	cleanup();
	data = input;
}

float* renderQueue::Scenes::pushed()
{
	float* output = new float[count];

	for (int i{ 0 }; i < count - 12; i++)
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
		1000.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};

	for (int i{ 0 }; i < 12; i++)
	{
		data[i + (count - 12)] = scene[i];
	}
}

void renderQueue::Scenes::decrement()
{
	count = minimum(count - 12);
}

float* renderQueue::Scenes::popped()
{
	float* output = new float[count];
	int unpopped = 0;

	for (int i{ 0 }; i < count; i++)
	{
		unpopped += (i == index * 12) * 12;
		output[i] = data[unpopped];
		unpopped++;
	}

	return output;
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

	return data[input + (index * 12)];
}

void renderQueue::Scenes::validate()
{
	if (count)
	{
		return;
	}

	throw int();
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

void renderQueue::Scenes::camera(float input[8])
{
	for (int i{ 0 }; i < 8; i++)
	{
		data[i + (index * 12)] = input[i];
	}
}

void renderQueue::Scenes::ambience(float input[4])
{
	for (int i{ 0 }; i < 4; i++)
	{
		data[i + 8 + (index * 12)] = input[i];
	}
}
