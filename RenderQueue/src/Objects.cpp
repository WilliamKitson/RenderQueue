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
	count = minimum(count - 13);

	float* popped = new float[count];
	int dataIndex = 0;

	for (int i{ 0 }; i < count; i++)
	{
		if (i == index * 13)
		{
			dataIndex += 13;
		}

		popped[i] = data[dataIndex];
		dataIndex++;
	}

	swap(popped);
}

int RenderQueue::Objects::getCount()
{
	return count / 13;
}

float RenderQueue::Objects::getXpos()
{
	return element(0);
}

float RenderQueue::Objects::getYpos()
{
	return element(1);
}

float RenderQueue::Objects::getZpos()
{
	return element(2);
}

float RenderQueue::Objects::getXrot()
{
	return element(3);
}

float RenderQueue::Objects::getYrot()
{
	return element(4);
}

float RenderQueue::Objects::getZrot()
{
	return element(5);
}

float RenderQueue::Objects::getXscale()
{
	return element(6);
}

float RenderQueue::Objects::getYscale()
{
	return element(7);
}

float RenderQueue::Objects::getZscale()
{
	return element(8);
}

float RenderQueue::Objects::getRed()
{
	return element(9);
}

float RenderQueue::Objects::getGreen()
{
	return element(10);
}

float RenderQueue::Objects::getBlue()
{
	return element(11);
}

float RenderQueue::Objects::getAlpha()
{
	return element(12);
}

void RenderQueue::Objects::setIndex(int input)
{
	index = input;
}

void RenderQueue::Objects::setTransform(float input[9])
{
	for (int i{ 0 }; i < 9; i++)
	{
		data[i + (index * 13)] = input[i];
	}
}

void RenderQueue::Objects::setColour(float input[4])
{
	for (int i{ 0 }; i < 4; i++)
	{
		data[i + 9 + (index * 13)] = input[i];
	}
}

void RenderQueue::Objects::cleanup()
{
	delete[] data;
	data = nullptr;
}

void RenderQueue::Objects::increment()
{
	count += 13;
}

void RenderQueue::Objects::swap(float* input)
{
	cleanup();
	data = input;
}

float* RenderQueue::Objects::pushed()
{
	float* output = new float[count];

	for (int i{ 0 }; i < count - 13; i++)
	{
		output[i] = data[i];
	}

	return output;
}

void RenderQueue::Objects::initialise()
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

int RenderQueue::Objects::minimum(int input)
{
	int output = 0;

	if (input < output)
	{
		return output;
	}

	return input;
}

float RenderQueue::Objects::element(int input)
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

void RenderQueue::Objects::validate()
{
	if (count)
	{
		return;
	}

	throw int();
}
