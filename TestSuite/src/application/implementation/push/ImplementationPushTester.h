#pragma once

#include <string>
#include "ImplementationPushCameraTest.h"

class ImplementationPushTester
{
public:
	ImplementationPushTester();
	~ImplementationPushTester();

	std::string test();

private:
	std::string testCamera();
};
