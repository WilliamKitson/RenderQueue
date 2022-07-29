#pragma once

#include "Camera.h"
#include "Colour.h"
#include "Transform.h"

namespace renderQueue
{
	class Facade
	{
	public:
		Facade();
		virtual ~Facade();

		virtual void pushScene();
		virtual void pushObject();
		virtual void popScene();
		virtual int getScenes();
		virtual Camera getCamera();
		virtual Colour getAmbience();
		virtual int getObjects();
		virtual Transform getTransform();
		virtual void setScene(int);
		virtual void setCamera(Camera);
		virtual void setAmbience(Colour);
		virtual void setObject(int);
		virtual void setTransform(Transform);
	};
}
