#pragma once

#include <string>

#include "count/BindingsCountTester.h"
#include "scene/BindingsSceneTester.h"
#include "index/BindingsIndexTester.h"

class BindingsTester
{
public:
	BindingsTester();
	~BindingsTester();

	std::string test();

private:
	std::string testCount();
	std::string testScene();
	std::string testPop();
};
