#pragma once

#include <string>

#include "elements/ElementsTester.h"
#include "scenes/ScenesTester.h"
#include "objects/ObjectsTester.h"
#include "bindings/BindingsTester.h"
#include "distance/DistanceTester.h"

class DomainTester
{
public:
	DomainTester();
	~DomainTester();

	std::string test();

private:
	std::string testElements();
	std::string testScenes();
	std::string testObjects();
	std::string testBindings();
	std::string testDistance();
};
