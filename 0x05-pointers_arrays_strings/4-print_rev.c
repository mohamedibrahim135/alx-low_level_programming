#include<stdio.h>
void print_rev(char *s)
{
int i = 0, p;
while (*s != '\0')
{
s++;
i++;
}
for (p = 0; p <= i; p++)
{
printf("%c", *s);
s--;
}
}
