#pragma once

#include "Camera.h"
#include "Colour.h"

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
		virtual Colour getAmbience();
		virtual void setScene(int);
		virtual void setCamera(Camera);
		virtual void setAmbience(Colour);
	};
}
