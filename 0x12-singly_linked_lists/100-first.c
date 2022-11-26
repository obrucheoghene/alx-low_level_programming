#include <stdio.h>


void startUpFirst(void) __attribute__((constructor));

/**
 * startUpFirst - run before main
 *
 */
void startUpFirst(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
