#pragma once

#include <string>

#include "count/ElementsCountTester.h"
#include "data/ElementsDataTester.h"
#include "index/ElementsIndexTester.h"
#include "element/ElementsElementTester.h"

class ElementsTester
{
public:
	ElementsTester();
	~ElementsTester();

	std::string test();

private:
	std::string testCount();
	std::string testData();
	std::string testIndex();
	std::string testElement();
};
