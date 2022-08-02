#include "ImplementationRenderOutsideTest.h"

ImplementationRenderOutsideTest::ImplementationRenderOutsideTest()
	: unit{ new renderQueue::Implementation }
{
}

ImplementationRenderOutsideTest::~ImplementationRenderOutsideTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationRenderOutsideTest::test()
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

	return "implementation render outside test failed\n";
}
