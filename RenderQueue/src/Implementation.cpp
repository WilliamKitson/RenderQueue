#include "Implementation.h"

renderQueue::Implementation::Implementation()
	: scenes(), objects(), bindings(), distance()
{
}

renderQueue::Implementation::~Implementation()
{
}

void renderQueue::Implementation::pushScene()
{
	scenes.push();
}

void renderQueue::Implementation::popScene()
{
	scenes.pop();
}

void renderQueue::Implementation::pushObject()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return;
	}

	objects.push();
	bindings.push(scenes.getIndex());
}

void renderQueue::Implementation::popObject()
{
	objects.pop();
	bindings.pop();
	setObject(0);
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

bool renderQueue::Implementation::getOverlap()
{
	return scenes.getOverlap();
}

int renderQueue::Implementation::getObjects()
{
	int output = 0;

	for (int i{ 0 }; i < objects.getCount(); i++)
	{
		bindings.setIndex(i);
		output += bindings.getScene() == scenes.getIndex();
	}

	return output;
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
		objects.getAlpha(),
	};

	return output;
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

void renderQueue::Implementation::setNoneoverlap()
{
	scenes.setNoneoverlap();
}

void renderQueue::Implementation::setOverlap()
{
	scenes.setOverlap();
}

void renderQueue::Implementation::setObject(int input)
{
	input = index(input);
	objects.setIndex(input);
	bindings.setIndex(input);
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

void renderQueue::Implementation::validate()
{
	if (scenes.getCount())
	{
		return;
	}

	throw int();
}

int renderQueue::Implementation::index(int input)
{
	input++;
	int output = 0;

	while (input)
	{
		bindings.setIndex(output);
		input -= bindings.getScene() == scenes.getIndex();
		output++;
	}

	return output - 1;
}
