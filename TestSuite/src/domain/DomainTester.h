#pragma once

#include <string>
#include "objects/ObjectsTester.h"

class DomainTester
{
public:
	DomainTester();
	~DomainTester();

	std::string test();

private:
	std::string testObjects();
};
