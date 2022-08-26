#include "ElementsDataEmptyTest.h"

ElementsDataEmptyTest::ElementsDataEmptyTest()
	: resolution{ 4 }, unit{ resolution }
{
}

ElementsDataEmptyTest::~ElementsDataEmptyTest()
{
}

std::string ElementsDataEmptyTest::test()
{
	if (successes() == resolution)
	{
		return std::string();
	}

	return "elements data empty test failed\n";
}

int ElementsDataEmptyTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < resolution; i++)
	{
		unit.setElement(i);
		unit.setData((float)i);
		output += unit.getData() == 0.0f;
	}

	return output;
}
