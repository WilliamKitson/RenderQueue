#include "ElementsTester.h"

ElementsTester::ElementsTester()
{
}

ElementsTester::~ElementsTester()
{
}

std::string ElementsTester::test()
{
	std::string output{ "" };

	output += testCount();
	output += testData();
	output += testIndex();
	output += testElement();

	return output;
}

std::string ElementsTester::testCount()
{
	return ElementsCountTester().test();
}

std::string ElementsTester::testData()
{
	return ElementsDataTester().test();
}

std::string ElementsTester::testIndex()
{
	return ElementsIndexTester().test();
}

std::string ElementsTester::testElement()
{
	return ElementsElementTester().test();
}
