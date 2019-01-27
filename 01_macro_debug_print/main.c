#include <stdio.h>

#ifdef DEBUG_LOG
#define DEBUG_PRINT(...) printf(__VA_ARGS__)
#else
#define DEBUG_PRINT(...)
#endif

char name[] = "Aviral";

void main()
{
	DEBUG_PRINT("Hello World from %s!\n",name);
}
