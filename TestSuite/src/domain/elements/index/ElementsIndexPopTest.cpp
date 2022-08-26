#include "ElementsIndexPopTest.h"

ElementsIndexPopTest::ElementsIndexPopTest()
	: unit{ 0 }, itterations{ 4 }
{
	initialise();
}

ElementsIndexPopTest::~ElementsIndexPopTest()
{
}

std::string ElementsIndexPopTest::test()
{
	unit.pop();

	if (unit.getData() == 1.0f)
	{
		return std::string();
	}

	return "elements index pop test failed\n";
}

void ElementsIndexPopTest::initialise()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit.push();
		unit.setIndex(i);
		unit.setData((float)i + 1);
	}
}
