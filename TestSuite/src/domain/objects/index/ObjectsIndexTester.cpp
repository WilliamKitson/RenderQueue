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
	output += testMinimum();

	return output;
}

std::string ObjectsIndexTester::testPop()
{
	return ObjectsIndexPopTest().test();
}

std::string ObjectsIndexTester::testMinimum()
{
	return ObjectsIndexMinimumTest().test();
}
