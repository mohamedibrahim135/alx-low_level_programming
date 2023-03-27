#include<unistd.h>
/**
 * main -to print a char
 * return: always return 0 (Success)
 */
int _putchar(char c)
{
return(write(1, &c, 1))
}
