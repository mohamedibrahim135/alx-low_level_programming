#include <stdio.h>
#include"main.h"

/**
*main - Prints a Fizz Buzz program
*Return: Always 0 (Success)
*/

int main(void)
{
int x;

for (x = 1; x <= 100; x++)
{

if (x % 3 == 0)
{
if (x % 5 == 0)
{printf("FizzBuzz ");
}
else
{
printf("Fizz ");
}
}
else if (x % 5 == 0)
{
if (x % 3 == 0)
{
printf("FizzBuzz ");
}
else
{printf("Buzz ");
}
}
else
{
printf("%i ", x);
}
}
return (0);
}