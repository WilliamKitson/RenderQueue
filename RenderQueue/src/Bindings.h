#pragma once

namespace renderQueue
{
	class Bindings
	{
	public:
		Bindings();
		~Bindings();

		void push(int);
		void pop();
		int getCount();

	private:
		int minimum(int);

	private:
		int count;
	};
}
