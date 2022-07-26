#include "ObjectsTester.h"

ObjectsTester::ObjectsTester()
{
}

ObjectsTester::~ObjectsTester()
{
}

std::string ObjectsTester::test()
{
	std::string output{ "" };

	output += testCount();

	return output;
}

std::string ObjectsTester::testCount()
{
	return ObjectsCountTester().test();
}
