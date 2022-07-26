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
		int count;
	};
}
