#pragma once

#include "Camera.h"
#include "RGBA.h"

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
		virtual RGBA getAmbience();
		virtual void setScene(int);
		virtual void setCamera(Camera);
		virtual void setAmbience(RGBA);
	};
}
