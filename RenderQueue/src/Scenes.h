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
		int getIndex();
		float getXpos();
		float getYpos();
		float getZpos();
		float getXrot();
		float getYrot();
		float getZrot();
		float getFrustum();
		float getDrawDistance();
		float getRed();
		float getGreen();
		float getBlue();
		float getAlpha();
		bool getOverlap();
		void setIndex(int);
		void setCamera(float[8]);
		void setAmbience(float[4]);
		void setNoneoverlap();
		void setOverlap();

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
		void camera(float[8]);
		void ambience(float[4]);

	private:
		int count;
		int index;
		float* data;
	};
}
