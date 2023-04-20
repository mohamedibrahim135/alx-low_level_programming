#include <stddef.h>
#include "function_pointers.h"
/**
* array_iterator-mihamed
* @array:ddd
* @size:ddd
* @action:ddd
* Return:m d
*/
void array_iterator(int *array, size_t size, void (*action) (int))
{
unsigned int i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
