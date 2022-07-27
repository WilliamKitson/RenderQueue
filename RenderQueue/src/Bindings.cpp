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

	int* pushed = new int[count];

	for (int i{ 0 }; i < count - 1; i++)
	{
		pushed[i] = data[i];
	}

	cleanup();
	data = pushed;

	data[count - 1] = minimum(input);
}

void renderQueue::Bindings::pop()
{
	count = minimum(count - 1);
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
