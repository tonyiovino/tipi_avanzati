#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	struct timespec intervallo;
	intervallo.tv_sec = 0;
	intervallo.tv_nsec = 700 * 1000 * 1000;

	puts("*");
	nanosleep(&intervallo, NULL); //A cosa serve "NULL"?

	puts("*");
	nanosleep(&intervallo, NULL);

	puts("*");
	nanosleep(&intervallo, NULL);

	return 0;
}
