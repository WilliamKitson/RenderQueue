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

void renderQueue::Facade::pushObject()
{
}

void renderQueue::Facade::popScene()
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

renderQueue::Colour renderQueue::Facade::getAmbience()
{
    return Colour();
}

int renderQueue::Facade::getObjects()
{
    return 0;
}

renderQueue::Transform renderQueue::Facade::getTransform()
{
    return Transform();
}

void renderQueue::Facade::setScene(int)
{
}

void renderQueue::Facade::setCamera(Camera)
{
}

void renderQueue::Facade::setAmbience(Colour)
{
}

void renderQueue::Facade::setObject(int)
{
}

void renderQueue::Facade::setTransform(Transform)
{
}
