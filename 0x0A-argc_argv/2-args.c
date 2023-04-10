#include <stdio.h>
#include "main.h"

/**
 * main - Prints numer of arguements passed to the programm.
 * @argc: Number of arguements.
 * @argv: Array of arguements.
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for	(i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
