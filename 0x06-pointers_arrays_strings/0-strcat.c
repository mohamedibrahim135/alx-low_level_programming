#include <stdio.h>
#include "_putchar.c"
/**
*_strcat -Concatenates two strings
*@dest: The destination string
*@src: The source string
*Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0, t = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
j++;
}

while (t != j)
{
dest[i] = src[t];
i++;
t++;
}

return (dest);
}
