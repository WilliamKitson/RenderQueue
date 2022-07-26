#include "ObjectsTransformDefaultTest.h"

ObjectsTransformDefaultTest::ObjectsTransformDefaultTest()
{
}

ObjectsTransformDefaultTest::~ObjectsTransformDefaultTest()
{
}

std::string ObjectsTransformDefaultTest::test()
{
	float transform[] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		1.0f,
		1.0f,
		1.0f
	};

	RenderQueue::Objects unit;
	unit.push();

	int successes = 0;

	for (int i{ 0 }; i < 9; i++)
	{
		successes += unit.getTransform()[i] == transform[i];
	}

	if (successes == 9)
	{
		return std::string();
	}

	return "objects transform default test failed\n";
}
