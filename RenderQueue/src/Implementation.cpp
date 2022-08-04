#include "Implementation.h"

renderQueue::Implementation::Implementation()
	: scenes()
{
}

renderQueue::Implementation::~Implementation()
{
}

void renderQueue::Implementation::pushScene()
{
	scenes.push();
}

int renderQueue::Implementation::getScenes()
{
	return scenes.getCount();
}

renderQueue::Camera renderQueue::Implementation::getCamera()
{
	Camera camera{
		scenes.getXpos(),
		scenes.getYpos(),
		scenes.getZpos(),
		scenes.getXrot(),
		scenes.getYrot(),
		scenes.getZrot(),
		scenes.getFrustum(),
		scenes.getDrawDistance()
	};

	return camera;
}

void renderQueue::Implementation::setScene(int input)
{
	scenes.setIndex(input);
}

void renderQueue::Implementation::setCamera(Camera input)
{
	float camera[] = {
		input.xpos,
		input.ypos,
		input.zpos,
		input.xrot,
		input.yrot,
		input.zrot,
		input.frustum,
		input.drawDistance
	};

	scenes.setCamera(camera);
}
