#pragma once

namespace RenderQueue
{
	class Objects
	{
	public:
		Objects();
		~Objects();

		void push();
		void pop();
		int getCount();

	private:
		int minimum(int);

	private:
		int count;
	};
}
