#pragma once

#include <string>

#include "ImplementationPushCameraTest.h"
#include "ImplementationPushAmbienceTest.h"

class ImplementationPushTester
{
public:
	ImplementationPushTester();
	~ImplementationPushTester();

	std::string test();

private:
	std::string testCamera();
	std::string testAmbience();
};
