#include "Bindings.h"

renderQueue::Bindings::Bindings()
	: count{ 0 }, index{ 0 }, data{ nullptr }
{
}

renderQueue::Bindings::~Bindings()
{
	delete[] data;
	data = nullptr;
}

void renderQueue::Bindings::push(int input)
{
	count++;

	int* pushed = new int[count];

	for (int i{ 0 }; i < count - 1; i++)
	{
		pushed[i] = data[i];
	}

	delete[] data;
	data = nullptr;

	data = pushed;

	data[count - 1] = input;
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
	return data[index];
}

void renderQueue::Bindings::setIndex(int input)
{
	index = input;
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
