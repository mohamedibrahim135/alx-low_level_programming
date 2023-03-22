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
for (in = n; in <= 98; in++)
{
printf("%i, ", in);
}
}
