#pragma once

#include <string>

#include "objects/ObjectsTester.h"
#include "bindings/BindingsTester.h"

class DomainTester
{
public:
	DomainTester();
	~DomainTester();

	std::string test();

private:
	std::string testObjects();
	std::string testBindings();
};
