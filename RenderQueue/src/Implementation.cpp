#include "Implementation.h"

renderQueue::Implementation::Implementation()
	: scenes(), objects{ nullptr }
{
}

renderQueue::Implementation::~Implementation()
{
	cleanup();
}

void renderQueue::Implementation::pushScene()
{
	scenes.push();
	swap(pushed());
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

	objects[scenes.getIndex()].push();
}

void renderQueue::Implementation::popObject()
{
	objects[scenes.getIndex()].pop();
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
	try
	{
		validate();
	}
	catch (int)
	{
		return 0;
	}

	return objects[scenes.getIndex()].getCount();
}

renderQueue::Transform renderQueue::Implementation::getTransform()
{
	Transform output{
		objects[scenes.getIndex()].getXpos(),
		objects[scenes.getIndex()].getYpos(),
		objects[scenes.getIndex()].getZpos(),
		objects[scenes.getIndex()].getXrot(),
		objects[scenes.getIndex()].getYrot(),
		objects[scenes.getIndex()].getZrot(),
		objects[scenes.getIndex()].getXscale(),
		objects[scenes.getIndex()].getYscale(),
		objects[scenes.getIndex()].getZscale()
	};

	return output;
}

renderQueue::RGBA renderQueue::Implementation::getColour()
{
	RGBA output{
		objects[scenes.getIndex()].getRed(),
		objects[scenes.getIndex()].getGreen(),
		objects[scenes.getIndex()].getBlue(),
		objects[scenes.getIndex()].getAlpha()
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
	objects[scenes.getIndex()].setIndex(input);
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

	objects[scenes.getIndex()].setTransform(transform);
}

void renderQueue::Implementation::setColour(RGBA input)
{
	float colour[] = {
		input.red,
		input.green,
		input.blue,
		input.alpha
	};

	objects[scenes.getIndex()].setColour(colour);
}

void renderQueue::Implementation::cleanup()
{
	delete[] objects;
	objects = nullptr;
}

void renderQueue::Implementation::swap(Objects* input)
{
	cleanup();
	objects = input;
}

renderQueue::Objects* renderQueue::Implementation::pushed()
{
	Objects* output = new Objects[scenes.getCount()];

	for (int i{ 0 }; i < scenes.getCount() - 1; i++)
	{
		for (int i2{ 0 }; i2 < objects[i].getCount(); i2++)
		{
			objects[i].setIndex(i2);

			float transform[] = {
				objects[i].getXpos(),
				objects[i].getYpos(),
				objects[i].getZpos(),
				objects[i].getXrot(),
				objects[i].getYrot(),
				objects[i].getZrot(),
				objects[i].getXscale(),
				objects[i].getYscale(),
				objects[i].getZscale()
			};

			float colour[] = {
				objects[i].getRed(),
				objects[i].getGreen(),
				objects[i].getBlue(),
				objects[i].getAlpha()
			};

			output[i].push();
			output[i].setIndex(i2);
			output[i].setTransform(transform);
			output[i].setColour(colour);
		}
	}

	return output;
}

void renderQueue::Implementation::validate()
{
	if (scenes.getCount())
	{
		return;
	}

	throw int();
}
