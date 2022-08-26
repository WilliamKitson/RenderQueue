#include "ElementsIndexMaximumTest.h"

ElementsIndexMaximumTest::ElementsIndexMaximumTest()
	: unit{ 0 }, data{ 1.0f }
{
}

ElementsIndexMaximumTest::~ElementsIndexMaximumTest()
{
}

std::string ElementsIndexMaximumTest::test()
{
	unit.push();
	unit.setData(data);
	unit.setIndex(1);

	if (unit.getData() == data)
	{
		return std::string();
	}

	return "elements index maximum test failed\n";
}
