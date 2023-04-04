#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @board: The chessboard to be printed.
 *
 * Return: always 0 (Success).
 *
*/

void print_chessboard(char (*board)[8])
{
	int r;
	int c;

	for	(r = 0; r < 8; r++)
	{
		for	(c = 0; c < 8; c++)
		{
			_putchar(board[r][c]);
		}
		_putchar('\n');
	}
}
