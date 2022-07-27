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
	count--;
}

int renderQueue::Bindings::getCount()
{
	return count;
}
