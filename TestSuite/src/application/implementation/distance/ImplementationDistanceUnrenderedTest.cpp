#include "ImplementationDistanceUnrenderedTest.h"

ImplementationDistanceUnrenderedTest::ImplementationDistanceUnrenderedTest()
	: unit{ new renderQueue::Implementation }
{
}

ImplementationDistanceUnrenderedTest::~ImplementationDistanceUnrenderedTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationDistanceUnrenderedTest::test()
{
	renderQueue::Camera camera{
		1.0f,
		1.0f,
		1.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	unit->pushScene();
	unit->setCamera(camera);
	unit->pushObject();

	if (!unit->getRender())
	{
		return std::string();
	}

	return "implementation distance unrendered test failed\n";
}
