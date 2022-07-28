#pragma once

namespace renderQueue
{
	class Objects
	{
	public:
		Objects();
		~Objects();

		void push();
		void pop();
		int getCount();
		float getXpos();
		float getYpos();
		float getZpos();
		float getXrot();
		float getYrot();
		float getZrot();
		float getXscale();
		float getYscale();
		float getZscale();
		float getRed();
		float getGreen();
		float getBlue();
		float getAlpha();
		void setIndex(int);
		void setTransform(float[9]);
		void setColour(float[4]);

	private:
		void cleanup();
		void increment();
		void swap(float*);
		float* pushed();
		void initialise();
		void decrement();
		float* popped();
		float element(int);
		void validate();
		int minimum(int);
		int maximum(int);
		void transform(float[9]);
		void colour(float[4]);

	private:
		int count;
		int index;
		float* data;
	};
}
