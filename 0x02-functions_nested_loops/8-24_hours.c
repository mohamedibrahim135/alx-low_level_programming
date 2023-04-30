#include"main.h"
#include<stdio.h>
/**
* jack_bauer -Prints the last digit of a number
* Return: ...
*/
void jack_bauer(void)
{
int i, s;

for (s = 0; s < 24; s++)
{
for (i = 0; i < 60; i++)
{
if (i < 10 && s < 10)
{
printf("0%i:0%i\n", s, i);
}
if (i >= 10 && i < 60 && s < 10)
{
printf("0%i:%i\n", s, i);
}
if (i < 10 && s >= 10 && s < 24)
{
printf("%i:0%i\n", s, i);
}
if (i >= 10 && i < 60 && s >= 10 && s < 24)
{
printf("%i:%i\n", s, i);
}
}
}
}
