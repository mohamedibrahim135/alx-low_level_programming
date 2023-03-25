#include "main.h"
/**
*print_triangle -Check if a letter is upper
*@size: The number to be checked
*Return: 1 for upper letter or 0 for any else
*/

void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = size - x; y > 1; y--)
{
_putchar(32);
}
for (z = 0; z <= x; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
