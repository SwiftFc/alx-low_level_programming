#include <stdio.h>

/**
 * before_main - a function to print the desired message
 *
 * Return: Always 0
 */

/* Function prototype Here */
void before_main(void)__attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my house upon my back!\n");
}
