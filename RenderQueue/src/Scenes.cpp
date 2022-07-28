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

int renderQueue::Scenes::getCount()
{
	return count;
}
