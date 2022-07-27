#pragma once

#include <string>
#include "BindingsScenePushTest.h"

class BindingsSceneTester
{
public:
	BindingsSceneTester();
	~BindingsSceneTester();

	std::string test();

private:
	std::string testPush();
};
