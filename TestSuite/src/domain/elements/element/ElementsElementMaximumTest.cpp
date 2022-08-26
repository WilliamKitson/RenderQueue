#include "ElementsElementMaximumTest.h"

ElementsElementMaximumTest::ElementsElementMaximumTest()
	: unit{ 0 }, data{ 1.0f }
{
}

ElementsElementMaximumTest::~ElementsElementMaximumTest()
{
}

std::string ElementsElementMaximumTest::test()
{
	unit.push();
	unit.setData(data);
	unit.setElement(1);

	if (unit.getData() == data)
	{
		return std::string();
	}

	return "elements element maximum test failed\n";
}
