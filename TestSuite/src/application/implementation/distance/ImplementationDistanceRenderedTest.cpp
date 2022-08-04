#include "ImplementationDistanceRenderedTest.h"

ImplementationDistanceRenderedTest::ImplementationDistanceRenderedTest()
	: unit{ new renderQueue::Implementation }
{
}

ImplementationDistanceRenderedTest::~ImplementationDistanceRenderedTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationDistanceRenderedTest::test()
{
	renderQueue::Camera camera{
		1.0f,
		1.0f,
		1.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		10.0f
	};

	unit->pushScene();
	unit->setCamera(camera);
	unit->pushObject();

	if (unit->getRender())
	{
		return std::string();
	}

	return "implementation distance rendered test failed\n";
}
