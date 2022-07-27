#include "Bindings.h"

renderQueue::Bindings::Bindings()
	: count{ 0 }, index{ 0 }, data{ nullptr }
{
}

renderQueue::Bindings::~Bindings()
{
	cleanup();
}

void renderQueue::Bindings::push(int input)
{
	increment();
	swap(pushed());
	initialise(input);
}

void renderQueue::Bindings::pop()
{
	decrement();
	swap(popped());
}

int renderQueue::Bindings::getCount()
{
	return count;
}

int renderQueue::Bindings::getScene()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0;
	}

	return data[index];
}

void renderQueue::Bindings::setIndex(int input)
{
	index = input;
}

void renderQueue::Bindings::cleanup()
{
	delete[] data;
	data = nullptr;
}

void renderQueue::Bindings::increment()
{
	count++;
}

void renderQueue::Bindings::swap(int* input)
{
	cleanup();
	data = input;
}

int* renderQueue::Bindings::pushed()
{
	int* output = new int[count];

	for (int i{ 0 }; i < count - 1; i++)
	{
		output[i] = data[i];
	}

	return output;
}

void renderQueue::Bindings::initialise(int input)
{
	data[count - 1] = minimum(input);
}

void renderQueue::Bindings::decrement()
{
	count = minimum(count - 1);
}

int* renderQueue::Bindings::popped()
{
	int* output = new int[count];
	int unpopped = 0;

	for (int i{ 0 }; i < count; i++)
	{
		unpopped += (i == index);
		output[i] = data[unpopped];
		unpopped++;
	}

	return output;
}

int renderQueue::Bindings::minimum(int input)
{
	int output = 0;

	if (input < output)
	{
		return output;
	}

	return input;
}

void renderQueue::Bindings::validate()
{
	if (count)
	{
		return;
	}

	throw int();
}
