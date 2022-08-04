#include "Implementation.h"

renderQueue::Implementation::Implementation()
	: scenes(), objects{ nullptr }
{
}

renderQueue::Implementation::~Implementation()
{
	delete[] objects;
	objects = nullptr;
}

void renderQueue::Implementation::pushScene()
{
	scenes.push();

	Objects* pushed = new Objects[scenes.getCount()];

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

			pushed[i].push();
			pushed[i].setIndex(i2);
			pushed[i].setTransform(transform);
			pushed[i].setColour(colour);
		}
	}

	delete[] objects;
	objects = nullptr;
	objects = pushed;
}

void renderQueue::Implementation::pushObject()
{
	objects[scenes.getIndex()].push();
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
