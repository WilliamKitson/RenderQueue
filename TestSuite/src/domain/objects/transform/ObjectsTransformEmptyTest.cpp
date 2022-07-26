#include "ObjectsTransformEmptyTest.h"

ObjectsTransformEmptyTest::ObjectsTransformEmptyTest()
{
}

ObjectsTransformEmptyTest::~ObjectsTransformEmptyTest()
{
}

std::string ObjectsTransformEmptyTest::test()
{
	RenderQueue::Objects unit;

	bool success = true;

	if (unit.getXpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getYpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getZpos() != 0.0f)
	{
		success = false;
	}

	if (unit.getXrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getYrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getZrot() != 0.0f)
	{
		success = false;
	}

	if (unit.getXscale() != 0.0f)
	{
		success = false;
	}

	if (unit.getYscale() != 0.0f)
	{
		success = false;
	}

	if (unit.getZscale() != 0.0f)
	{
		success = false;
	}

	if (success)
	{
		return std::string();
	}

	return "objects transform empty test failed\n";
}
