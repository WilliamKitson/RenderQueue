
#include "ImplementationPushCameraTest.h"

ImplementationPushCameraTest::ImplementationPushCameraTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationPushCameraTest::~ImplementationPushCameraTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPushCameraTest::test()
{
	initialise();

	if (successes() == itterations)
	{
		return std::string();
	}

	return "implementation push camera test failed\n";
}

void ImplementationPushCameraTest::initialise()
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

int ImplementationPushCameraTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < unit->getScenes(); i++)
	{
		unit->setScene(i);

		output += success(
			unit->getCamera(),
			(float)i
		);
	}

	return output;
}

bool ImplementationPushCameraTest::success(renderQueue::Camera camera, float index)
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
