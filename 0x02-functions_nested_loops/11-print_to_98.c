#include"main.h"
#include<stdio.h>
/**
* print_to_98 -Checks for lowercase character
* @n: The character to be checked
* Return: 1 for lowercase character or 0 for anything else
*/
void print_to_98(int n)
{
int in;
if (n <= 98)
{
for (in = n; in <= 97; in++)
{
printf("%i, ", in);
}
printf("98");
}
else if (n >= 98)
{
for (in = n; in >= 97; in--)
{
printf("%i, ", in);
}
printf("98");
}
else
{
printf("%i", n);
}
}
