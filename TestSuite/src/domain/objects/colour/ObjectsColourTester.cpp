#include "ObjectsColourTester.h"

ObjectsColourTester::ObjectsColourTester()
{
}

ObjectsColourTester::~ObjectsColourTester()
{
}

std::string ObjectsColourTester::test()
{
	std::string output{ "" };

	output += testDefault();

	return output;
}

std::string ObjectsColourTester::testDefault()
{
	return ObjectsColourDefaultTest().test();
}
