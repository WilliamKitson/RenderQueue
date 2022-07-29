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
		renderQueue::Camera camera = unit->getCamera();

		bool success = true;

		if (camera.xpos != (float)i)
		{
			success = false;
		}

		if (camera.ypos != (float)i)
		{
			success = false;
		}

		if (camera.zpos != (float)i)
		{
			success = false;
		}

		if (camera.xrot != (float)i)
		{
			success = false;
		}

		if (camera.yrot != (float)i)
		{
			success = false;
		}

		if (camera.zrot != (float)i)
		{
			success = false;
		}

		if (camera.frustum != (float)i)
		{
			success = false;
		}

		output += success;
	}

	return output;
}
