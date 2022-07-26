#pragma once

namespace RenderQueue
{
	class Objects
	{
	public:
		Objects();
		~Objects();

		void push();
		int getCount();

	private:
		int count;
	};
}
