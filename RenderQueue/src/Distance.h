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

	private:
		float distance;
		float data[6];
	};
}
