#include	<stdio.h>
/**
 * main	-	this	will	print	the	size
 *
 * Return:	0	(Success)
*/
int	main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char : %lu byte(s)\n", sizeof(a));
	printf("size of an int : %lu byte(s)\n", sizeof(b));
	printf("size of a long int : %lu byte(s)\n", sizeof(c));
	printf("size of a long long int : %lu byte(s)\n", sizeof(d));
	printf("size o a float : %lu byte(s)\n", sizeof(e));
	return (0);
}
