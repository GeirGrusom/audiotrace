#ifdef WIN32

#include "main.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int WinMain(HINSTANCE hInstance, HINSTANCE hPrev, LPSTR cmdline, int cmdShow)
{
	return main();
}

#endif