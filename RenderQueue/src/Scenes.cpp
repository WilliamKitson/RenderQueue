#include "Scenes.h"

renderQueue::Scenes::Scenes()
	: count{ 0 }
{
}

renderQueue::Scenes::~Scenes()
{
}

void renderQueue::Scenes::push()
{
	count++;
}

void renderQueue::Scenes::pop()
{
	count = minimum(count - 1);
}

int renderQueue::Scenes::getCount()
{
	return count;
}

int renderQueue::Scenes::minimum(int input)
{
	int output = 0;

	if (input < output)
	{
		return output;
	}

	return input;
}
