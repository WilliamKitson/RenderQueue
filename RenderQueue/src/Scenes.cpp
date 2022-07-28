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

float renderQueue::Scenes::getXpos()
{
	return 0.0f;
}

float renderQueue::Scenes::getYpos()
{
	return 0.0f;
}

float renderQueue::Scenes::getZpos()
{
	return 0.0f;
}

float renderQueue::Scenes::getXrot()
{
	return 0.0f;
}

float renderQueue::Scenes::getYrot()
{
	return 0.0f;
}

float renderQueue::Scenes::getZrot()
{
	return 0.0f;
}

float renderQueue::Scenes::getFrustum()
{
	return 90.0f;
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
