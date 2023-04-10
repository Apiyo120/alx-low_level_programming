#include <stdio.h>
#include "main.h"

/**
 * main - It prints the name of the programm.
 *
 * @argc:count of arguements supplied to the program.
 * @argv:array of pointers to the string containing the arguements.
 * Return - always 0 (Success)
 *
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
