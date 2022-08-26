#include "Elements.h"

renderQueue::Elements::Elements(int input)
	: configuration(), data{ nullptr }
{
	initConfig(input);
}

renderQueue::Elements::~Elements()
{
	cleanup();
}

void renderQueue::Elements::push()
{
	increment();
	swap(pushed());
	initData();
}

void renderQueue::Elements::pop()
{
	decrement();
	swap(popped());
	resetIndex();
}

int renderQueue::Elements::getCount()
{
	return count() / resolution();
}

float renderQueue::Elements::getData()
{
	try
	{
		emptyData();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[position()];
}

void renderQueue::Elements::setIndex(int input)
{
	configuration[2] = minimum(maxIndex(input));
}

void renderQueue::Elements::setElement(int input)
{
	configuration[3] = minimum(maxElement(input));
}

void renderQueue::Elements::setData(float input)
{
	try
	{
		emptyData();
	}
	catch (int)
	{
		return;
	}

	data[position()] = input;
}

void renderQueue::Elements::initConfig(int input)
{
	configuration[0] = minResolution(input);

	for (int i{ 1 }; i < 4; i++)
	{
		configuration[i] = 0;
	}
}

int renderQueue::Elements::minResolution(int input)
{
	int output = 1;

	if (input < output)
	{
		return output;
	}

	return input;
}

void renderQueue::Elements::cleanup()
{
	delete[] data;
	data = nullptr;
}

void renderQueue::Elements::increment()
{
	configuration[1] += resolution();
}

float* renderQueue::Elements::pushed()
{
	float* output = new float[count()];

	for (int i{ 0 }; i < count() - resolution(); i++)
	{
		output[i] = data[i];
	}

	return output;
}

void renderQueue::Elements::swap(float* input)
{
	cleanup();
	data = input;
}

void renderQueue::Elements::initData()
{
	for (int i{ 0 }; i < resolution(); i++)
	{
		data[i + (count() - resolution())] = 0.0f;
	}
}

void renderQueue::Elements::decrement()
{
	configuration[1] = minimum(count() - resolution());
}

float* renderQueue::Elements::popped()
{
	float* output = new float[count()];
	int unpopped = 0;

	for (int i{ 0 }; i < count(); i++)
	{
		unpopped += (i == index() * resolution()) * resolution();
		output[i] = data[unpopped];
		unpopped++;
	}

	return output;
}

void renderQueue::Elements::resetIndex()
{
	configuration[2] = 0;
}

void renderQueue::Elements::emptyData()
{
	if (count())
	{
		return;
	}

	throw int();
}

int renderQueue::Elements::minimum(int input)
{
	int output = 0;

	if (input < output)
	{
		return output;
	}

	return input;
}

int renderQueue::Elements::maxIndex(int input)
{
	if (input < count())
	{
		return input;
	}

	return 0;
}

int renderQueue::Elements::maxElement(int input)
{
	if (input < resolution())
	{
		return input;
	}

	return 0;
}

int renderQueue::Elements::resolution()
{
	return configuration[0];
}

int renderQueue::Elements::count()
{
	return configuration[1];
}

int renderQueue::Elements::index()
{
	return configuration[2];
}

int renderQueue::Elements::element()
{
	return configuration[3];
}

int renderQueue::Elements::position()
{
	return (resolution() * index()) + element();
}
