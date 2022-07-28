#pragma once

namespace renderQueue
{
	class Scenes
	{
	public:
		Scenes();
		~Scenes();

		void push();
		void pop();
		int getCount();

	private:
		int minimum(int);

	private:
		int count;
	};
}
