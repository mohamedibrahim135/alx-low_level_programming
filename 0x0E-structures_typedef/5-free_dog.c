#include <stdlib.h>
#include "dog.h"
/**
* free_dog -yhby
* @d: j8j
*
* Return:byy
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
