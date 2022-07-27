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
		int getScene();
		void setIndex(int);

	private:
		void cleanup();
		void increment();
		int minimum(int);
		void validate();

	private:
		int count;
		int index;
		int* data;
	};
}
