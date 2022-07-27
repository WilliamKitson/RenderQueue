#pragma once

#include <string>

#include "BindingsScenePushTest.h"
#include "BindingsSceneMinimumTest.h"

class BindingsSceneTester
{
public:
	BindingsSceneTester();
	~BindingsSceneTester();

	std::string test();

private:
	std::string testPush();
	std::string testMinimum();
};
