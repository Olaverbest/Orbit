#pragma once

#ifdef AS_PLATFORM_WINDOWS
	#ifdef AS_BUILD_DLL
		#define ASTRA_API __declspec(dllexport)
	#else
		#define ASTRA_API __declspec(dllimport)
	#endif // AS_BUILD_DLL
#else
	#error Astra only supports windows!
#endif // AS_PLATFORM_WINDOWS