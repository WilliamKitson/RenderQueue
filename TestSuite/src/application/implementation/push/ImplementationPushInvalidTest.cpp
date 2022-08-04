#include "ImplementationPushInvalidTest.h"

ImplementationPushInvalidTest::ImplementationPushInvalidTest()
	: unit{ new renderQueue::Implementation }
{
}

ImplementationPushInvalidTest::~ImplementationPushInvalidTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPushInvalidTest::test()
{
	unit->pushObject();

	if (!unit->getObjects())
	{
		return std::string();
	}

	return "implementation push invalid test failed\n";
}
