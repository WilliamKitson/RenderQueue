#include "Objects.h"

RenderQueue::Objects::Objects()
	: count{ 0 }
{
}

RenderQueue::Objects::~Objects()
{
}

void RenderQueue::Objects::push()
{
	count++;
}

void RenderQueue::Objects::pop()
{
	count = minimum(count - 1);
}

int RenderQueue::Objects::getCount()
{
	return count;
}

float* RenderQueue::Objects::getTransform()
{
	float output[] = {
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

	return output;
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
