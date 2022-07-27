#include "ObjectsIndexTester.h"

ObjectsIndexTester::ObjectsIndexTester()
{
}

ObjectsIndexTester::~ObjectsIndexTester()
{
}

std::string ObjectsIndexTester::test()
{
	std::string output{ "" };

	output += testPop();

	return output;
}

std::string ObjectsIndexTester::testPop()
{
	return ObjectsIndexPopTest().test();
}
