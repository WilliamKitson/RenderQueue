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

float RenderQueue::Objects::getXpos()
{
	return 0.0f;
}

float RenderQueue::Objects::getYpos()
{
	return 0.0f;
}

float RenderQueue::Objects::getZpos()
{
	return 0.0f;
}

float RenderQueue::Objects::getXrot()
{
	return 0.0f;
}

float RenderQueue::Objects::getYrot()
{
	return 0.0f;
}

float RenderQueue::Objects::getZrot()
{
	return 0.0f;
}

float RenderQueue::Objects::getXscale()
{
	return 1.0f;
}

float RenderQueue::Objects::getYscale()
{
	return 1.0f;
}

float RenderQueue::Objects::getZscale()
{
	return 1.0f;
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
