#include "Objects.h"

RenderQueue::Objects::Objects()
	: count{ 0 }, index{ 0 }, data{ nullptr }
{
}

RenderQueue::Objects::~Objects()
{
	cleanup();
}

void RenderQueue::Objects::push()
{
	increment();
	swap(pushed());
	initialise();
}

void RenderQueue::Objects::pop()
{
	count = minimum(count - 9);
}

int RenderQueue::Objects::getCount()
{
	return count / 9;
}

float RenderQueue::Objects::getXpos()
{
	return data[0 + (index * 9)];
}

float RenderQueue::Objects::getYpos()
{
	return data[1 + (index * 9)];
}

float RenderQueue::Objects::getZpos()
{
	return data[2 + (index * 9)];
}

float RenderQueue::Objects::getXrot()
{
	return data[3 + (index * 9)];
}

float RenderQueue::Objects::getYrot()
{
	return data[4 + (index * 9)];
}

float RenderQueue::Objects::getZrot()
{
	return data[5 + (index * 9)];
}

float RenderQueue::Objects::getXscale()
{
	return data[6 + (index * 9)];
}

float RenderQueue::Objects::getYscale()
{
	return data[7 + (index * 9)];
}

float RenderQueue::Objects::getZscale()
{
	return data[8 + (index * 9)];
}

void RenderQueue::Objects::setIndex(int input)
{
	index = input;
}

void RenderQueue::Objects::setTransform(float input[9])
{
	for (int i{ 0 }; i < 9; i++)
	{
		data[i + (index * 9)] = input[i];
	}
}

void RenderQueue::Objects::cleanup()
{
	delete[] data;
	data = nullptr;
}

void RenderQueue::Objects::increment()
{
	count += 9;
}

void RenderQueue::Objects::swap(float* input)
{
	cleanup();
	data = input;
}

float* RenderQueue::Objects::pushed()
{
	float* output = new float[count];

	for (int i{ 0 }; i < count - 9; i++)
	{
		output[i] = data[i];
	}

	return output;
}

void RenderQueue::Objects::initialise()
{
	float transform[] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		1.0f,
		1.0f,
		1.0f
	};

	for (int i{ 0 }; i < 9; i++)
	{
		data[i + (count - 9)] = transform[i];
	}
}

int RenderQueue::Objects::minimum(int input)
{
	int output = 0;

	if (input < output)
	{
		return output;
	}

	return input;
}
