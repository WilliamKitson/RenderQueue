#include "ImplementationPushColourTest.h"

ImplementationPushColourTest::ImplementationPushColourTest()
	: unit{ new renderQueue::Implementation }, itterations{ 4 }
{
}

ImplementationPushColourTest::~ImplementationPushColourTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplementationPushColourTest::test()
{
	scenes();

	if (sSuccesses() == itterations * itterations)
	{
		return std::string();
	}

	return "implementation push colour test failed\n";
}

void ImplementationPushColourTest::scenes()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		unit->pushScene();
		unit->setScene(i);
		objects();
	}
}

void ImplementationPushColourTest::objects()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		renderQueue::RGBA colour{
			(float)i,
			(float)i,
			(float)i,
			(float)i
		};

		unit->pushObject();
		unit->setObject(i);
		unit->setColour(colour);
	}
}

int ImplementationPushColourTest::sSuccesses()
{
	int output = 0;

	for (int i{ 0 }; i < unit->getScenes(); i++)
	{
		unit->setScene(i);
		output += oSuccesses();
	}

	return output;
}

int ImplementationPushColourTest::oSuccesses()
{
	int output = 0;

	for (int i{ 0 }; i < unit->getObjects(); i++)
	{
		unit->setObject(i);

		output += success(
			unit->getColour(),
			(float)i
		);
	}

	return output;
}

bool ImplementationPushColourTest::success(renderQueue::RGBA colour, float index)
{
	if (colour.red != index)
	{
		return false;
	}

	if (colour.green != index)
	{
		return false;
	}

	if (colour.blue != index)
	{
		return false;
	}

	if (colour.alpha != index)
	{
		return false;
	}

	return true;
}
