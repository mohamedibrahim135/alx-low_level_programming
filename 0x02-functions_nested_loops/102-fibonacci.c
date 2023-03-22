#include"main.h"
#include <stdio.h>
/**
* main -Checks for lowercase character
* Return: 1 for lowercase character or 0 for anything else
*/
int main(void)
{
int i, j, mul, s;
i = 1;
j = 2;
printf("%i, ", i);
printf("%i, ", j);
for (s = 1; s <= 48; s++)
{
mul = i + j;
printf("%i, ", mul);
i = j;
j = mul;
}
}
