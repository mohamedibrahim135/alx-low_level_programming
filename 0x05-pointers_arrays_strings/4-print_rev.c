#include<stdio.h>
#include"main.h"
/**
*print_rev - Prints a string in reverse
*@s: The string to print
*Return: void
*/
void print_rev(char *s)
{
int i = 0, p;
while (*s != '\0')
{
s++;
i++;
}
for (p = 0; p <= i; p++)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
