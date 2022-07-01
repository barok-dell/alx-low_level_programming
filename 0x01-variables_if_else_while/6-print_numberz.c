#include <stdio.h>
/**
 *main - Entry Point
 *Description: prints all single digit characters of base 10
 *Return: Always zero
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar(num + '0');
putchar('\n');
return (0);
}
