#pragma once
#include "Log.h"

#ifdef GL_PLATFORM_WINDOWS

extern GameLab::Application* GameLab::CreateApplication();

int main(int argc, char** argv) {

	GameLab::Log::Init();
	GL_CORE_WARN("Initialized the log (finally)!!!");
	GL_INFO("What up, biscuit?!");

	auto app = GameLab::CreateApplication();
	app->Run();
	delete app;
}

#endif