#include <stdio.h>
/**
 * _putchar - print a char 
 * Return: Always the char c(Success)
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
