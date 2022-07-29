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
		virtual int getScenes();
		virtual Camera getCamera();
		virtual void setScene(int);
		virtual void setCamera(Camera);

	private:
		Scenes scenes;
	};
}
