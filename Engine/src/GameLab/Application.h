#pragma once

#include "Core.h"

namespace GameLab {
	class GAME_LAB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}


