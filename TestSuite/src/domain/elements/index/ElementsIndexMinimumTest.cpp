#include "ElementsIndexMinimumTest.h"

ElementsIndexMinimumTest::ElementsIndexMinimumTest()
	: unit{ 0 }, data{ 1.0f }
{
}

ElementsIndexMinimumTest::~ElementsIndexMinimumTest()
{
}

std::string ElementsIndexMinimumTest::test()
{
	unit.push();
	unit.setData(data);
	unit.setIndex(-1);

	if (unit.getData() == data)
	{
		return std::string();
	}

	return "elements index minimum test failed\n";
}
