#include "DomainTester.h"

DomainTester::DomainTester()
{
}

DomainTester::~DomainTester()
{
}

std::string DomainTester::test()
{
	std::string output{ "" };

	output += testScenes();
	output += testObjects();
	output += testBindings();

	return output;
}

std::string DomainTester::testScenes()
{
	return ScenesTester().test();
}

std::string DomainTester::testObjects()
{
	return ObjectsTester().test();
}

std::string DomainTester::testBindings()
{
	return BindingsTester().test();
}
