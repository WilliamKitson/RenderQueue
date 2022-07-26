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
	count--;
}

int RenderQueue::Objects::getCount()
{
	return count;
}
