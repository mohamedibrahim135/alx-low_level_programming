#include "main.h"
/**
*print_triangle -Check if a letter is upper
*@size: The number to be checked
*Return: 1 for upper letter or 0 for any else
*/

void print_triangle(int size)
{
int i, j;
_putchar(" #\n");
_putchar("##");
for (i = 0; i < size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(" ");
}
for (j = 1; j <= i; j++)
{
_putchar("#");
}
_putchar("\n");
}
_putchar("#\n");
return (0);
}
}
