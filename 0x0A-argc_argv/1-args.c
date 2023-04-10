#include <stdio.h>
#include "main.h"

/**
 * main - Prints numer of arguements passed to the programm.
 * @argc: Number of arguements.
 * @argv: Array of arguements.
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv __attribute__((unused)))
{
        printf("%d\n", argc - 1);
        return (0);
}
