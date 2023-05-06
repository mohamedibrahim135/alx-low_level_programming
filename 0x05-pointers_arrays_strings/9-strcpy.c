#include "main.h"
/**
*_strcpy - Copy a string
*@dest: Destination value
*@src: Source value
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*src != '\0')
{
dest[i] = *src;
src++;
i++;
}
dest[i++] = '\0';
return (dest);
}
