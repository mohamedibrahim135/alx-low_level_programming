#include "main.h"
/**
*print_rev - Prints a string in reverse
*@s: The string to print
*Return: void
*/
void print_rev(char *s)
{
char *i, *p;

i = s;

for (; *s != '\0'; s++)
{
}

s--;
p = s;

for (; p >= i; p--)
{
_putchar(*p);
}

_putchar('\n');
}
