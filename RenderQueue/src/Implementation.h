#pragma once

#include "Facade.h"
#include "Scenes.h"
#include "Objects.h"

namespace renderQueue
{
	class Implementation
		: public Facade
	{
	public:
		Implementation();
		virtual ~Implementation();

		virtual void pushScene();
		virtual void popScene();
		virtual void pushObject();
		virtual void popObject();
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
		void cleanup();
		void swap(Objects*);
		Objects* pushed();
		void validate();

	private:
		Scenes scenes;
		Objects* objects;
	};
}
