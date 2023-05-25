#pragma once

#ifdef GL_PLATFORM_WINDOWS

extern GameLab::Application* GameLab::CreateApplication();

int main(int argc, char** argv) {

	printf("GameLab Engine\n");

	auto app = GameLab::CreateApplication();
	app->Run();
	delete app;
}

#endif