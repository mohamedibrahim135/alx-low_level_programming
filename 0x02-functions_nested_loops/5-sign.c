#include"main.h"
/**
* print_sign -Checks for lowercase character
* @n: The character to be checked
* Return: 1 for lowercase character or 0 for anything else
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
