#pragma once

#include "Facade.h"
#include "Scenes.h"

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
		virtual int getScenes();
		virtual Camera getCamera();
		virtual Colour getAmbience();
		virtual void setScene(int);
		virtual void setCamera(Camera);
		virtual void setAmbience(Colour);

	private:
		Scenes scenes;
	};
}
