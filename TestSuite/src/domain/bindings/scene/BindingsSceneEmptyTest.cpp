#include "BindingsSceneEmptyTest.h"

BindingsSceneEmptyTest::BindingsSceneEmptyTest()
{
}

BindingsSceneEmptyTest::~BindingsSceneEmptyTest()
{
}

std::string BindingsSceneEmptyTest::test()
{
	if (!renderQueue::Bindings().getScene())
	{
		return std::string();
	}

	return "bindings scene empty test failed\n";
}
