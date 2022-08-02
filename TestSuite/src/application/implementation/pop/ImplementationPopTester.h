#pragma once

#include <string>
#include "ImplementationPopSceneTest.h"

class ImplementationPopTester
{
public:
	ImplementationPopTester();
	~ImplementationPopTester();

	std::string test();

private:
	std::string testScene();
};
