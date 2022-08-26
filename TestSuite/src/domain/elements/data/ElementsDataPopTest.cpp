#include "ElementsDataPopTest.h"

ElementsDataPopTest::ElementsDataPopTest()
	: resolution{ 4 }, unit{ resolution }
{
	push();
}

ElementsDataPopTest::~ElementsDataPopTest()
{
}

std::string ElementsDataPopTest::test()
{
	if (iSuccesses() == resolution * (resolution - 1))
	{
		return std::string();
	}

	return "elements data pop test failed\n";
}

void ElementsDataPopTest::push()
{
	for (int i{ 0 }; i < resolution; i++)
	{
		unit.push();
		unit.setIndex(i);
		initialise(i);
	}
}

void ElementsDataPopTest::initialise(int input)
{
	for (int i{ 0 }; i < resolution; i++)
	{
		unit.setElement(i);
		unit.setData((float)input + i);
	}
}

int ElementsDataPopTest::iSuccesses()
{
	int output = 0;

	for (int i{ 1 }; i < resolution; i++)
	{
		unit.setIndex(0);
		unit.pop();
		output += eSuccesses(i);
	}

	return output;
}

int ElementsDataPopTest::eSuccesses(int input)
{
	int output = 0;

	for (int i{ 0 }; i < resolution; i++)
	{
		unit.setElement(i);
		output += unit.getData() == (float)input + i;
	}

	return output;
}
