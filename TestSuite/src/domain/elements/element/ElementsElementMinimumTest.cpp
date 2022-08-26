#include "ElementsElementMinimumTest.h"

ElementsElementMinimumTest::ElementsElementMinimumTest()
	: unit{ 0 }, data{ 1.0f }
{
}

ElementsElementMinimumTest::~ElementsElementMinimumTest()
{
}

std::string ElementsElementMinimumTest::test()
{
	unit.push();
	unit.setData(data);
	unit.setElement(-1);

	if (unit.getData() == data)
	{
		return std::string();
	}

	return "elements element minimum test failed\n";
}
