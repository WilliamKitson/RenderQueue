#pragma once

#include <string>
#include "domain/DomainTester.h"

class SubordinateTester
{
public:
	SubordinateTester();
	~SubordinateTester();

	std::string test();

private:
	std::string testDomain();
};
