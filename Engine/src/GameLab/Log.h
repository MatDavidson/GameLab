#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace GameLab {

	class GAME_LAB_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;  }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define GL_CORE_TRACE(...)		::GameLab::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GL_CORE_INFO(...)		::GameLab::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GL_CORE_WARN(...)		::GameLab::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GL_CORE_ERROR(...)		::GameLab::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GL_CORE_CRITICAL(...)	::GameLab::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client log macros
#define GL_TRACE(...)			::GameLab::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GL_INFO(...)			::GameLab::Log::GetClientLogger()->info(__VA_ARGS__)
#define GL_WARN(...)			::GameLab::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GL_ERROR(...)			::GameLab::Log::GetClientLogger()->error(__VA_ARGS__)
#define GL_CRITICAL(...)		::GameLab::Log::GetClientLogger()->critical(__VA_ARGS__)


