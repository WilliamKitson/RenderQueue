#include "ImplementationRenderWithinTest.h"

ImplementationRenderWithinTest::ImplementationRenderWithinTest()
	: unit{ new renderQueue::Implementation }
{
}

ImplementationRenderWithinTest::~ImplementationRenderWithinTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationRenderWithinTest::test()
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

	return "implementation render within test failed\n";
}
