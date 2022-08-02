#include "Implementation.h"

renderQueue::Implementation::Implementation()
	: Facade(), scenes(), objects(), bindings(), distance()
{
}

renderQueue::Implementation::~Implementation()
{
}

void renderQueue::Implementation::pushScene()
{
	scenes.push();
}

void renderQueue::Implementation::pushObject()
{
	objects.push();
	bindings.push(scenes.getIndex());
}

void renderQueue::Implementation::popScene()
{
	scenes.pop();
}

int renderQueue::Implementation::getScenes()
{
	return scenes.getCount();
}

renderQueue::Camera renderQueue::Implementation::getCamera()
{
	Camera output{
		scenes.getXpos(),
		scenes.getYpos(),
		scenes.getZpos(),
		scenes.getXrot(),
		scenes.getYrot(),
		scenes.getZrot(),
		scenes.getFrustum(),
		scenes.getDrawDistance()
	};

	return output;
}

renderQueue::RGBA renderQueue::Implementation::getAmbience()
{
	RGBA output{
		scenes.getRed(),
		scenes.getGreen(),
		scenes.getBlue(),
		scenes.getAlpha()
	};

	return output;
}

int renderQueue::Implementation::getObjects()
{
	return count();
}

bool renderQueue::Implementation::getRender()
{
	float camera[] = {
		scenes.getXpos(),
		scenes.getYpos(),
		scenes.getZpos()
	};

	float object[] = {
		objects.getXpos(),
		objects.getYpos(),
		objects.getZpos()
	};

	distance.setCamera(camera);
	distance.setObject(object);
	distance.calculate();

	if (distance.getDistance() > scenes.getDrawDistance())
	{
		return false;
	}

	return true;
}

renderQueue::Transform renderQueue::Implementation::getTransform()
{
	Transform output{
		objects.getXpos(),
		objects.getYpos(),
		objects.getZpos(),
		objects.getXrot(),
		objects.getYrot(),
		objects.getZrot(),
		objects.getXscale(),
		objects.getYscale(),
		objects.getZscale(),
	};

	return output;
}

renderQueue::RGBA renderQueue::Implementation::getColour()
{
	RGBA output{
		objects.getRed(),
		objects.getGreen(),
		objects.getBlue(),
		objects.getAlpha()
	};

	return output;
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

void renderQueue::Implementation::setAmbience(RGBA input)
{
	float ambience[] = {
		input.red,
		input.green,
		input.blue,
		input.alpha
	};

	scenes.setAmbience(ambience);
}

void renderQueue::Implementation::setObject(int input)
{
	objects.setIndex(index(input));
}

void renderQueue::Implementation::setTransform(Transform input)
{
	float transform[] = {
		input.xpos,
		input.ypos,
		input.zpos,
		input.xrot,
		input.yrot,
		input.zrot,
		input.xscale,
		input.yscale,
		input.zscale
	};

	objects.setTransform(transform);
}

void renderQueue::Implementation::setColour(RGBA input)
{
	float colour[] = {
		input.red,
		input.green,
		input.blue,
		input.alpha
	};

	objects.setColour(colour);
}

int renderQueue::Implementation::count()
{
	int output = 0;

	for (int i{ 0 }; i < objects.getCount(); i++)
	{
		bindings.setIndex(i);
		output += bindings.getScene() == scenes.getIndex();
	}

	return output;
}

int renderQueue::Implementation::index(int input)
{
	int output = 0;
	int successes = 0;

	for (output; successes != input; output++)
	{
		bindings.setIndex(output);
		successes += bindings.getScene() == scenes.getIndex();
	}

	return output;
}
