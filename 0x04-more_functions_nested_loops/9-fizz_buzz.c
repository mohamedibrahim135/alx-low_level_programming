#include <stdio.h>

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
{
printf("FizzBuzz \n");
}
else
{
printf("Fizz \n");
}
}
else if (x % 5 == 0)
{
if (x % 3 == 0)
{
printf("FizzBuzz \n");
}
else
{printf("Buzz \n");
}
}
else
{
printf("%i \n", x);
}
}
return (0);
}
