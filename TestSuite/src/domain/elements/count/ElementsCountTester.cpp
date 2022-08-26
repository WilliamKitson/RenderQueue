#include "ElementsCountTester.h"

ElementsCountTester::ElementsCountTester()
{
}

ElementsCountTester::~ElementsCountTester()
{
}

std::string ElementsCountTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testPush();
	output += testPop();
	output += testMinimum();

	return output;
}

std::string ElementsCountTester::testDefault()
{
	return ElementsCountDefaultTest().test();
}

std::string ElementsCountTester::testPush()
{
	return ElementsCountPushTest().test();
}

std::string ElementsCountTester::testPop()
{
	return ElementsCountPopTest().test();
}

std::string ElementsCountTester::testMinimum()
{
	return ElementsCountMinimumTest().test();
}
