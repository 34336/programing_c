#include <stdio.h>

int OS(){
	#ifdef __linux__
		return 1;
	#endif
	#ifdef _WIN32
		return 2;
	#endif
	#ifdef __APPLE__
		return 3;
	#endif
}

