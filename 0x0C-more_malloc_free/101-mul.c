#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - It checks if a string contains a non-digit char.
 * @s: The string to be evaluated.
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - It returns the length of a string.
 * @s: The string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - It multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, i, carry, digit1, digit2, *result, d = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			digit2 = s2[length2] - '0';
			carry += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			d = 1;
		if (d)
			_putchar(result[i] + '0');
	}
	if (!d)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
