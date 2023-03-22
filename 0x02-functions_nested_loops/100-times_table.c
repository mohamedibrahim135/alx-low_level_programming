#include"main,h"
#include<stdio.h>
/**
* print_times_table -Checks for lowercase character
* @n: The character to be checked
* Return: 1 for lowercase character or 0 for anything else
*/
void print_times_table(int n)
{
int mul, i, j;

if (n > 0 && n < 15)
{
for (j = 0; j <= n; j++)
{
for (i = 0; i <= n; i++)
{

mul = j * i;

if (i < n)
{
printf("%i,\t", mul);
}

else
{
printf("%i", mul);
}
}
printf("\n");
}
}
}
