#include "main.h"
/**
*puts2 -Prints every other character of a string @str: The strina to be treated
*@str: moaj
*Return: void
*/
void puts2(char *str)
{
int v = 0;
for (; *str != '\0'; str++)
{
if (v % 2 == 0)
{
_putchar(*str);
}
v++;
}
_putchar('\n');
}
