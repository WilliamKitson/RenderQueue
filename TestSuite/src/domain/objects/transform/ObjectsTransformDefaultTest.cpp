#include "ObjectsTransformDefaultTest.h"

ObjectsTransformDefaultTest::ObjectsTransformDefaultTest()
	: unit(), transform()
{
	transform[0] = 0.0f;
	transform[1] = 0.0f;
	transform[2] = 0.0f;
	transform[3] = 0.0f;
	transform[4] = 0.0f;
	transform[5] = 0.0f;
	transform[6] = 1.0f;
	transform[7] = 1.0f;
	transform[8] = 1.0f;
}

ObjectsTransformDefaultTest::~ObjectsTransformDefaultTest()
{
}

std::string ObjectsTransformDefaultTest::test()
{
	unit.push();

	if (successes() == 9)
	{
		return std::string();
	}

	return "objects transform default test failed\n";
}

int ObjectsTransformDefaultTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < 9; i++)
	{
		output += unit.getTransform()[i] == transform[i];
	}

	return output;
}
