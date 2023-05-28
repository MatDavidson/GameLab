#pragma once

#ifdef GL_PLATFORM_WINDOWS
	#ifdef GL_BUILD_DLL
		#define GAME_LAB_API __declspec(dllexport)
	#else
		#define GAME_LAB_API __declspec(dllimport)
	#endif
#else
	#error GameLab only supports Windows!
#endif