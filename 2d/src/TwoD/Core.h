#pragma once

#ifdef TWOD_PLATFORM_WINDOWS
	#ifdef TWOD_BUILD_DLL
		#define TWOD_API __declspec(dllexport)
	#else
		#define TWOD_API __declspec(dllimport)
	#endif //	
#else
#error twoD only support windows
#endif // 


