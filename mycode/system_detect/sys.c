#include <stdio.h>

const char *OS(){
	#ifdef _WIN32
		return "win";
	#endif
	#ifdef __linux__
		return "linux";
	#endif
	#ifdef __APPLE__
		return "mac";
	#endif
}

