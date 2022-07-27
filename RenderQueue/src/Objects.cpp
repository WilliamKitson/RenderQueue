#include "Objects.h"

renderQueue::Objects::Objects()
	: count{ 0 }, index{ 0 }, data{ nullptr }
{
}

renderQueue::Objects::~Objects()
{
	cleanup();
}

void renderQueue::Objects::push()
{
	increment();
	swap(pushed());
	initialise();
}

void renderQueue::Objects::pop()
{
	decrement();
	swap(popped());
	index = 0;
}

int renderQueue::Objects::getCount()
{
	return count / 13;
}

float renderQueue::Objects::getXpos()
{
	return element(0);
}

float renderQueue::Objects::getYpos()
{
	return element(1);
}

float renderQueue::Objects::getZpos()
{
	return element(2);
}

float renderQueue::Objects::getXrot()
{
	return element(3);
}

float renderQueue::Objects::getYrot()
{
	return element(4);
}

float renderQueue::Objects::getZrot()
{
	return element(5);
}

float renderQueue::Objects::getXscale()
{
	return element(6);
}

float renderQueue::Objects::getYscale()
{
	return element(7);
}

float renderQueue::Objects::getZscale()
{
	return element(8);
}

float renderQueue::Objects::getRed()
{
	return element(9);
}

float renderQueue::Objects::getGreen()
{
	return element(10);
}

float renderQueue::Objects::getBlue()
{
	return element(11);
}

float renderQueue::Objects::getAlpha()
{
	return element(12);
}

void renderQueue::Objects::setIndex(int input)
{
	index = minimum(maximum(input));
}

void renderQueue::Objects::setTransform(float input[9])
{
	try
	{
		validate();
	}
	catch (int)
	{
		return;
	}

	for (int i{ 0 }; i < 9; i++)
	{
		data[i + (index * 13)] = input[i];
	}
}

void renderQueue::Objects::setColour(float input[4])
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
		data[i + 9 + (index * 13)] = input[i];
	}
}

void renderQueue::Objects::cleanup()
{
	delete[] data;
	data = nullptr;
}

void renderQueue::Objects::increment()
{
	count += 13;
}

void renderQueue::Objects::swap(float* input)
{
	cleanup();
	data = input;
}

float* renderQueue::Objects::pushed()
{
	float* output = new float[count];

	for (int i{ 0 }; i < count - 13; i++)
	{
		output[i] = data[i];
	}

	return output;
}

void renderQueue::Objects::initialise()
{
	float object[] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};

	for (int i{ 0 }; i < 13; i++)
	{
		data[i + (count - 13)] = object[i];
	}
}

void renderQueue::Objects::decrement()
{
	count = minimum(count - 13);
}

float* renderQueue::Objects::popped()
{
	float* output = new float[count];
	int unpopped = 0;

	for (int i{ 0 }; i < count; i++)
	{
		unpopped += (i == index * 13) * 13;
		output[i] = data[unpopped];
		unpopped++;
	}

	return output;
}

int renderQueue::Objects::minimum(int input)
{
	int output = 0;

	if (input < output)
	{
		return output;
	}

	return input;
}

int renderQueue::Objects::maximum(int input)
{
	if (input < getCount())
	{
		return input;
	}

	return 0;
}

float renderQueue::Objects::element(int input)
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[input + (index * 13)];
}

void renderQueue::Objects::validate()
{
	if (count)
	{
		return;
	}

	throw int();
}
