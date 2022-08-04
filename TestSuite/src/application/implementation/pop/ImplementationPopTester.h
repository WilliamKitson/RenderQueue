#pragma once

#include <string>

#include "ImplementationPopSceneTest.h"
#include "ImplementationPopObjectTest.h"

class ImplementationPopTester
{
public:
	ImplementationPopTester();
	~ImplementationPopTester();

	std::string test();

private:
	std::string testScene();
	std::string testObject();
};
