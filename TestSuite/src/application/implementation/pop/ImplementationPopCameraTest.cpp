#include "ImplementationPopCameraTest.h"

ImplementationPopCameraTest::ImplementationPopCameraTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationPopCameraTest::~ImplementationPopCameraTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPopCameraTest::test()
{
	initialise();

	if (successes() == itterations - 1)
	{
		return std::string();
	}

	return "implementation pop camera test failed\n";
}

void ImplementationPopCameraTest::initialise()
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
			(float)i
		};

		unit->pushScene();
		unit->setScene(i);
		unit->setCamera(camera);
	}
}

int ImplementationPopCameraTest::successes()
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

bool ImplementationPopCameraTest::success(renderQueue::Camera camera, float index)
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

	return true;
}
