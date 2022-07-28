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
		float getXpos();
		float getYpos();
		float getZpos();
		float getXrot();
		float getYrot();
		float getZrot();
		float getFrustum();
		void setIndex(int);
		void setCamera(float[7]);

	private:
		void cleanup();
		void increment();
		void swap(float*);
		float* pushed();
		void initialise();
		int minimum(int);
		void validate();

	private:
		int count;
		int index;
		float* data;
	};
}
