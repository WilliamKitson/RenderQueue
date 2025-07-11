#pragma once

#include <string>

#include "BindingsScenePushTest.h"
#include "BindingsSceneMinimumTest.h"
#include "BindingsSceneEmptyTest.h"
#include "BindingsScenePopTest.h"

class BindingsSceneTester
{
public:
	BindingsSceneTester();
	~BindingsSceneTester();

	std::string test();

private:
	std::string testPush();
	std::string testMinimum();
	std::string testEmpty();
	std::string testPop();
};
