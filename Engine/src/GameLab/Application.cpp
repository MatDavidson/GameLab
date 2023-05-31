#include "Application.h"

#include "GameLab/Events/ApplicationEvent.h"
#include "GameLab/Log.h"

namespace GameLab {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {

		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			GL_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			GL_TRACE(e);
		}

		while (true);
	}
}
