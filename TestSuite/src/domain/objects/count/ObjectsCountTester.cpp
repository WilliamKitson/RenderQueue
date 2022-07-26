#include "ObjectsCountTester.h"

ObjectsCountTester::ObjectsCountTester()
{
}

ObjectsCountTester::~ObjectsCountTester()
{
}

std::string ObjectsCountTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testPush();
	output += testPop();

	return output;
}

std::string ObjectsCountTester::testDefault()
{
	return ObjectsCountDefaultTest().test();
}

std::string ObjectsCountTester::testPush()
{
	return ObjectsCountPushTest().test();
}

std::string ObjectsCountTester::testPop()
{
	return ObjectsCountPopTest().test();
}
