#pragma once

#include "Camera.h"

namespace renderQueue
{
	class Facade
	{
	public:
		Facade();
		virtual ~Facade();

		virtual void pushScene();
		virtual int getScenes();
		virtual Camera getCamera();
		virtual void setScene(int);
		virtual void setCamera(Camera);
	};
}
