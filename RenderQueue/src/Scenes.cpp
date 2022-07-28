#include "Scenes.h"

renderQueue::Scenes::Scenes()
	: count{ 0 }, index{ 0 }, data{ nullptr }
{
}

renderQueue::Scenes::~Scenes()
{
	delete[] data;
	data = nullptr;
}

void renderQueue::Scenes::push()
{
	count += 7;

	float* pushed = new float[count];

	for (int i{ 0 }; i < count - 7; i++)
	{
		pushed[i] = data[i];
	}

	delete[] data;
	data = nullptr;

	data = pushed;

	float scene[] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		90.0f
	};

	for (int i{ 0 }; i < 7; i++)
	{
		data[i + (count - 7)] = scene[i];
	}
}

void renderQueue::Scenes::pop()
{
	count = minimum(count - 7);
}

int renderQueue::Scenes::getCount()
{
	return count / 7;
}

float renderQueue::Scenes::getXpos()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[0 + (index * 7)];
}

float renderQueue::Scenes::getYpos()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[1 + (index * 7)];
}

float renderQueue::Scenes::getZpos()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[2 + (index * 7)];
}

float renderQueue::Scenes::getXrot()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[3 + (index * 7)];
}

float renderQueue::Scenes::getYrot()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[4 + (index * 7)];
}

float renderQueue::Scenes::getZrot()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[5 + (index * 7)];
}

float renderQueue::Scenes::getFrustum()
{
	try
	{
		validate();
	}
	catch (int)
	{
		return 0.0f;
	}

	return data[6 + (index * 7)];
}

void renderQueue::Scenes::setIndex(int input)
{
	index = input;
}

void renderQueue::Scenes::setCamera(float input[7])
{
	try
	{
		validate();
	}
	catch (int)
	{
		return;
	}

	for (int i{ 0 }; i < 7; i++)
	{
		data[i + (index * 7)] = input[i];
	}
}

int renderQueue::Scenes::minimum(int input)
{
	int output = 0;

	if (input < output)
	{
		return output;
	}

	return input;
}

void renderQueue::Scenes::validate()
{
	if (count)
	{
		return;
	}

	throw int();
}
