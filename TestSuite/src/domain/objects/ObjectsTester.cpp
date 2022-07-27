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
	output += testTransform();
	output += testColour();
	output += testIndex();

	return output;
}

std::string ObjectsTester::testCount()
{
	return ObjectsCountTester().test();
}

std::string ObjectsTester::testTransform()
{
	return ObjectsTransformTester().test();
}

std::string ObjectsTester::testColour()
{
	return ObjectsColourTester().test();
}

std::string ObjectsTester::testIndex()
{
	return ObjectsIndexTester().test();
}
