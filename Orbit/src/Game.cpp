#include <Astra.h>

class Game : public Astra::Application
{
public:
	Game()
	{

	}

	~Game()
	{

	}
};

Astra::Application* Astra::CreateApplication()
{
	return new Game();
}