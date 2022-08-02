#include "ImplementationPopSceneTest.h"

ImplementationPopSceneTest::ImplementationPopSceneTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationPopSceneTest::~ImplementationPopSceneTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPopSceneTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "implementation pop scene test failed\n";
}

void ImplementationPopSceneTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		renderQueue::Camera camera{
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit->pushScene();
		unit->setScene(i);
		unit->setCamera(camera);
	}
}

int ImplementationPopSceneTest::successes()
{
	int output = 0;

	for (int i{ 1 }; i < itterations; i++)
	{
		unit->setScene(0);
		unit->popScene();

		output += success(
			unit->getCamera(),
			(float)i
		);
	}

	return output;
}

bool ImplementationPopSceneTest::success(renderQueue::Camera camera, float index)
{
	if (camera.xpos != index)
	{
		return false;
	}

	if (camera.ypos != index)
	{
		return false;
	}

	if (camera.zpos != index)
	{
		return false;
	}

	if (camera.xrot != index)
	{
		return false;
	}

	if (camera.yrot != index)
	{
		return false;
	}

	if (camera.zrot != index)
	{
		return false;
	}

	if (camera.frustum != index)
	{
		return false;
	}

	if (camera.drawDistance != index)
	{
		return false;
	}

	return true;
}
