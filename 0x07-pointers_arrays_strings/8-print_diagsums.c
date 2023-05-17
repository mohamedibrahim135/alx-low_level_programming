#include <stdio.h>
#include "main.h"
/**
* print_diagsums - Entry point
* @a: input
* @size: input
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int i = 0;
int sum1 = 0;
int j = size - 1;
int t = j;
int sum2 = 0;
for (; i <= size * size - 1; i = i + size + 1)
{
sum1 = sum1  + a[i];
}

for (; j <= t * size; j = j + size - 1)
{
sum2 = sum2  + a[j];
}

printf("%i, %i\n", sum1, sum2);
}
