#include <stdio.h>
#include "main.h"

/**
*print_number -Draws a straight line according to parameter
*@n: The number of lines to draw
*Return: empty
*/

void print_number(int n)
{
unsigned int k = n;
if (n < 0)
{
n *= -1;
k = n;
_putchar('-');
}
k /= 10;
if (k != 0)
print_number(k);
_putchar((unsigned int) n % 10 + '0');
}
