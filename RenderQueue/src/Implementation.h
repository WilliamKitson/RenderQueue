#pragma once

#include "Facade.h"
#include "Scenes.h"
#include "Objects.h"
#include "Bindings.h"
#include "Distance.h"

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
		virtual bool getOverlap();
		virtual int getObjects();
		virtual Transform getTransform();
		virtual RGBA getColour();
		virtual bool getRender();
		virtual void setScene(int);
		virtual void setCamera(Camera);
		virtual void setAmbience(RGBA);
		virtual void setNoneoverlap();
		virtual void setOverlap();
		virtual void setObject(int);
		virtual void setTransform(Transform);
		virtual void setColour(RGBA);

	private:
		void validate();
		void reset();
		int count();
		int index(int);

	private:
		Scenes scenes;
		Objects objects;
		Bindings bindings;
		Distance distance;
	};
}
