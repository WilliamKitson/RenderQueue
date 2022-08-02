#pragma once

namespace renderQueue
{
	class Distance
	{
	public:
		Distance();
		~Distance();

		void calculate();
		float getDistance();
		void setCamera(float[3]);
		void setObject(float[3]);

	private:
		void initialise();
		float root(float);
		float unsquared();
		float element(int);

	private:
		float distance;
		float data[6];
	};
}
