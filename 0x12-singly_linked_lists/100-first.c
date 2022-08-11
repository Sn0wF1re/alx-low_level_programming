#include "lists.h"
/**
 *beforeMain - print before main function
 *
 *Return: void
 */
void __attribute__((constructor)) beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
