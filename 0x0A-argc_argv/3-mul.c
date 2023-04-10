#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: The string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, a, b, dis, c, digit;

	i = 0;
	a = 0;
	b = 0;
	dis = 0;
	c = 0;
	digit = 0;

	while (s[dis] != '\0')
		dis++;

	while (i < dis && c == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
			b = b * 10 + digit;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}

	if (c == 0)
		return (0);

	return (b);
}

/**
 * main - It multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
