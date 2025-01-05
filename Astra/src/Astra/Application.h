#pragma once

#include "Core.h"

namespace Astra {

	class ASTRA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Define in client
	Application* CreateApplication();
}