#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * Description: a function that prints the chessboard
 * @a: The chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
int p1, p2;
for (p1 = 0; a[p1][7]; p1++)
{
for (p2 = 0; p2 < 8; p2++)
_putchar(a[p1][p2]);
_putchar('\n');
}
}
