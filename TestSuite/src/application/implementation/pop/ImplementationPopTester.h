#pragma once

#include <string>
#include "ImplementationPopCameraTest.h"

class ImplementationPopTester
{
public:
	ImplementationPopTester();
	~ImplementationPopTester();

	std::string test();

private:
	std::string testCamera();
};
