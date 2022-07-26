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

	return output;
}

std::string ObjectsCountTester::testDefault()
{
	return ObjectsCountDefaultTest().test();
}
