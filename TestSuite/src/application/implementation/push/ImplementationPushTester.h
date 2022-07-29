#pragma once

#include <string>

#include "ImplementationPushCameraTest.h"
#include "ImplementationPushAmbienceTest.h"
#include "ImplementationPushTransformTest.h"
#include "ImplementationPushColourTest.h"

class ImplementationPushTester
{
public:
	ImplementationPushTester();
	~ImplementationPushTester();

	std::string test();

private:
	std::string testCamera();
	std::string testAmbience();
	std::string testTransform();
	std::string testColour();
};
