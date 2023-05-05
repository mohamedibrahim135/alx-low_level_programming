#include"main.h"
/**
*puts_half - Prints half of a string
* @str: The string to print
* Return: void
*/
void puts_half(char *str)
{
int i = 0, s, l, m, d;

for (; *str != '\0'; str++)
{
i++;
}

for (s = 0; s < i; s++)
{
str--;
}

if ((i) % 2 == 0)
{
for (m = 0; m < i / 2; m++)
{
str++;
}
for (l = i / 2; l < i; l++)
{
_putchar(*str);
str++;
}
}

else
{
for (d = 0; d < i + 1 / 2; d++)
{
str++;
}
for (l = i + 1 / 2; l < i; l++)
{
_putchar(*str);
str++;
}
}
}
