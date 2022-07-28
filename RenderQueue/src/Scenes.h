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
		float getRed();
		float getGreen();
		float getBlue();
		float getAlpha();
		void setIndex(int);
		void setCamera(float[7]);
		void setAmbience(float[4]);

	private:
		void cleanup();
		void increment();
		void swap(float*);
		float* pushed();
		void initialise();
		void decrement();
		float* popped();
		int minimum(int);
		int maximum(int);
		void camera(float[7]);
		float element(int);
		void validate();

	private:
		int count;
		int index;
		float* data;
	};
}
