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
		virtual RGBA getAmbience();
		virtual int getObjects();
		virtual Transform getTransform();
		virtual RGBA getColour();
		virtual void setScene(int);
		virtual void setCamera(Camera);
		virtual void setAmbience(RGBA);
		virtual void setObject(int);
		virtual void setTransform(Transform);
		virtual void setColour(RGBA);

	private:
		int count();
		int index(int);

	private:
		Scenes scenes;
		Objects objects;
		Bindings bindings;
	};
}
