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
}

int RenderQueue::Objects::getCount()
{
	return count / 13;
}

float RenderQueue::Objects::getXpos()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[0 + (index * 13)];
}

float RenderQueue::Objects::getYpos()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[1 + (index * 13)];
}

float RenderQueue::Objects::getZpos()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[2 + (index * 13)];
}

float RenderQueue::Objects::getXrot()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[3 + (index * 13)];
}

float RenderQueue::Objects::getYrot()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[4 + (index * 13)];
}

float RenderQueue::Objects::getZrot()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[5 + (index * 13)];
}

float RenderQueue::Objects::getXscale()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[6 + (index * 13)];
}

float RenderQueue::Objects::getYscale()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[7 + (index * 13)];
}

float RenderQueue::Objects::getZscale()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[8 + (index * 13)];
}

float RenderQueue::Objects::getRed()
{
	return data[9 + (index * 13)];
}

float RenderQueue::Objects::getGreen()
{
	return data[10 + (index * 13)];
}

float RenderQueue::Objects::getBlue()
{
	return data[11 + (index * 13)];
}

float RenderQueue::Objects::getAlpha()
{
	return data[12 + (index * 13)];
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

void RenderQueue::Objects::validate()
{
	if (count)
	{
		return;
	}

	throw int();
}
