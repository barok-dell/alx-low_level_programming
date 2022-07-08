#include "main.h"
#include <stdio.h>
/**
* print_diagonal - Print diagonal line dependent on the integer n.
* @n : The number of lines using '\' characters to use
* Return: Void.
*/
void print_diagonal(int n)
{
int i;
int spacess;
for (i = 0; i <= n; i++)
{
for (spacess = 0; spacess < i; spacess++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
