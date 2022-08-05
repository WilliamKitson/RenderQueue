#include "BindingsCountDefaultTest.h"

BindingsCountDefaultTest::BindingsCountDefaultTest()
{
}

BindingsCountDefaultTest::~BindingsCountDefaultTest()
{
}

std::string BindingsCountDefaultTest::test()
{
	if (!renderQueue::Bindings().getCount())
	{
		return std::string();
	}

	return "bindings count default test failed\n";
}
