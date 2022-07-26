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

	return output;
}

std::string ObjectsTransformTester::testDefault()
{
	return ObjectsTransformDefaultTest().test();
}
