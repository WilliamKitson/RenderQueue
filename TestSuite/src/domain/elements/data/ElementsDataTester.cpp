#include "ElementsDataTester.h"

ElementsDataTester::ElementsDataTester()
{
}

ElementsDataTester::~ElementsDataTester()
{
}

std::string ElementsDataTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testPush();
	output += testPop();
	output += testEmpty();

	return output;
}

std::string ElementsDataTester::testDefault()
{
	return ElementsDataDefaultTest().test();
}

std::string ElementsDataTester::testPush()
{
	return ElementsDataPushTest().test();
}

std::string ElementsDataTester::testPop()
{
	return ElementsDataPopTest().test();
}

std::string ElementsDataTester::testEmpty()
{
	return ElementsDataEmptyTest().test();
}
