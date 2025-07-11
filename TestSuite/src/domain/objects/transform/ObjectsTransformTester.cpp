#include "ObjectsTransformTester.h"

ObjectsTransformTester::ObjectsTransformTester()
{
}

ObjectsTransformTester::~ObjectsTransformTester()
{
}

std::string ObjectsTransformTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testPush();
	output += testEmpty();
	output += testPop();

	return output;
}

std::string ObjectsTransformTester::testDefault()
{
	return ObjectsTransformDefaultTest().test();
}

std::string ObjectsTransformTester::testPush()
{
	return ObjectsTransformPushTest().test();
}

std::string ObjectsTransformTester::testEmpty()
{
	return ObjectsTransformEmptyTest().test();
}

std::string ObjectsTransformTester::testPop()
{
	return ObjectsTransformPopTest().test();
}
