#include "main.h"
/**
*puts2 -Prints every other character of a string @str: The strina to be treated
*@str: moaj
*Return: void
*/
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
