#include "ObjectsIndexPopTest.h"

ObjectsIndexPopTest::ObjectsIndexPopTest()
{
}

ObjectsIndexPopTest::~ObjectsIndexPopTest()
{
}

std::string ObjectsIndexPopTest::test()
{
	RenderQueue::Objects unit;

	for (int i{ 0 }; i < 4; i++)
	{
		unit.push();

		float transform[] = {
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit.setIndex(i);
		unit.setTransform(transform);
	}

	unit.setIndex(3);
	unit.pop();

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

	return "objects index pop test failed\n";
}
