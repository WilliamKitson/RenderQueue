#pragma once

#include <string>
#include "implementation/ImplementationTester.h"

class ApplicationTester
{
public:
	ApplicationTester();
	~ApplicationTester();

	std::string test();

private:
	std::string testImplementation();
};
