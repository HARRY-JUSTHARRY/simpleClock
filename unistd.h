#ifdef _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * x) // Converts seconds to milliseconds
#else
#include <unistd.h>
#endif