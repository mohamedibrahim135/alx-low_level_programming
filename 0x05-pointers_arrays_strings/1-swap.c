#include <stdio.h>

/**
 *swap_int -to swap two values
 *@a: is a common variable
 *@b: is a common variable
 */
void swap_int(int *a, int *b)
{
int y;
y = *a;
*a = *b;
*b = y;
}
