#include "Facade.h"

renderQueue::Facade::Facade()
{
}

renderQueue::Facade::~Facade()
{
}

void renderQueue::Facade::pushScene()
{
}

void renderQueue::Facade::popScene()
{
}

void renderQueue::Facade::pushObject()
{
}

void renderQueue::Facade::popObject()
{
}

int renderQueue::Facade::getScenes()
{
	return 0;
}

renderQueue::Camera renderQueue::Facade::getCamera()
{
	return Camera();
}

renderQueue::RGBA renderQueue::Facade::getAmbience()
{
	return RGBA();
}

bool renderQueue::Facade::getOverlap()
{
	return false;
}

int renderQueue::Facade::getObjects()
{
	return 0;
}

renderQueue::Transform renderQueue::Facade::getTransform()
{
	return Transform();
}

renderQueue::RGBA renderQueue::Facade::getColour()
{
	return RGBA();
}

bool renderQueue::Facade::getRender()
{
	return false;
}

void renderQueue::Facade::setScene(int)
{
}

void renderQueue::Facade::setCamera(Camera)
{
}

void renderQueue::Facade::setAmbience(RGBA)
{
}

void renderQueue::Facade::setNoneoverlap()
{
}

void renderQueue::Facade::setOverlap()
{
}

void renderQueue::Facade::setObject(int)
{
}

void renderQueue::Facade::setTransform(Transform)
{
}

void renderQueue::Facade::setColour(RGBA)
{
}
