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
