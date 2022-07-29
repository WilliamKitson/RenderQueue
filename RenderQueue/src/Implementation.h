#pragma once

#include "Facade.h"
#include "Scenes.h"
#include "Objects.h"
#include "Bindings.h"

namespace renderQueue
{
	class Implementation
		: public Facade
	{
	public:
		Implementation();
		virtual ~Implementation();

		virtual void pushScene();
		virtual void pushObject();
		virtual void popScene();
		virtual int getScenes();
		virtual Camera getCamera();
		virtual Colour getAmbience();
		virtual int getObjects();
		virtual Transform getTransform();
		virtual Colour getColour();
		virtual void setScene(int);
		virtual void setCamera(Camera);
		virtual void setAmbience(Colour);
		virtual void setObject(int);
		virtual void setTransform(Transform);
		virtual void setColour(Colour);

	private:
		Scenes scenes;
		Objects objects;
		Bindings bindings;
	};
}
