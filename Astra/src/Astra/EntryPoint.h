#pragma once

#ifdef AS_PLATFORM_WINDOWS

extern Astra::Application* Astra::CreateApplication();

int main(int argc, char** argv)
{
	//Sandbox* sandbox = new Sandbox();
	auto app = Astra::CreateApplication();
	app->Run();
	delete app;
}

#endif