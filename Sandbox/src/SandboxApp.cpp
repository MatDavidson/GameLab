#include <GameLab.h>

class Sandbox : public GameLab::Application {
public:
	Sandbox(){

	}
	~Sandbox(){

	}
};

GameLab::Application* GameLab::CreateApplication() {
	return new Sandbox();
}