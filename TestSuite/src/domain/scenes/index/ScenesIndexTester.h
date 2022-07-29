#pragma once

#include <string>

#include "ScenesIndexGetTest.h"
#include "ScenesIndexPopTest.h"
#include "ScenesIndexMinimumTest.h"
#include "ScenesIndexMaximumTest.h"

class ScenesIndexTester
{
public:
	ScenesIndexTester();
	~ScenesIndexTester();

	std::string test();

private:
	std::string testGet();
	std::string testPop();
	std::string testMinimum();
	std::string testMaximum();
};
