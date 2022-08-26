#pragma once

namespace renderQueue
{
	class Elements
	{
	public:
		Elements(int);
		~Elements();

		void push();
		void pop();
		int getCount();
		float getData();
		void setIndex(int);
		void setElement(int);
		void setData(float);

	private:
		void initConfig(int);
		int minResolution(int);
		void cleanup();
		void increment();
		float* pushed();
		void swap(float*);
		void initData();
		void decrement();
		float* popped();
		void resetIndex();
		void emptyData();
		int minimum(int);
		int maxIndex(int);
		int maxElement(int);
		int resolution();
		int count();
		int index();
		int element();
		int position();

	private:
		int configuration[4];
		float* data;
	};
}
