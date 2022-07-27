#pragma once

#include <string>

#include "count/BindingsCountTester.h"
#include "scene/BindingsSceneTester.h"

class BindingsTester
{
public:
	BindingsTester();
	~BindingsTester();

	std::string test();

private:
	std::string testCount();
	std::string testScene();
};
