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

int RenderQueue::Objects::getCount()
{
	return count;
}
