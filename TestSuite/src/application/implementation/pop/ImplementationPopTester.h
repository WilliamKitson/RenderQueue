#pragma once

#include <string>

#include "ImplementationPopCameraTest.h"
#include "ImplementationPopAmbienceTest.h"

class ImplementationPopTester
{
public:
	ImplementationPopTester();
	~ImplementationPopTester();

	std::string test();

private:
	std::string testCamera();
	std::string testAmbience();
};
