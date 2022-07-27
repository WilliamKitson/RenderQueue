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
	output += testPush();
	output += testEmpty();
	output += testPop();

	return output;
}

std::string ObjectsColourTester::testDefault()
{
	return ObjectsColourDefaultTest().test();
}

std::string ObjectsColourTester::testPush()
{
	return ObjectsColourPushTest().test();
}

std::string ObjectsColourTester::testEmpty()
{
	return ObjectsColourEmptyTest().test();
}

std::string ObjectsColourTester::testPop()
{
	return ObjectsColourPopTest().test();
}
