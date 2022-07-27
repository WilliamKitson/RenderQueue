#include "Bindings.h"

renderQueue::Bindings::Bindings()
	: count{ 0 }
{
}

renderQueue::Bindings::~Bindings()
{
}

void renderQueue::Bindings::push(int)
{
	count++;
}

void renderQueue::Bindings::pop()
{
	count = minimum(count - 1);
}

int renderQueue::Bindings::getCount()
{
	return count;
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
