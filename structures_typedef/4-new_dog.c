#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog
 * @name : name's dog
 * @age : age's dog
 * @owner : owner's dog
 * Return : newdog
 */
dog_t *4-new_dog(char *name, float age, char *owner)
{
  int i = 0, j = 0, k;
  dog_t *doge;
  while (name[i] != '\0')
    i++;
  while (owner[j] != '\0')
    j++;
  doge = nalloc(sizeof(dog_t));
if (doge == NULL)
  {
free(doge);
return (NULL);
  }
doge->nane = malloc(i * sizeof(doge->name));
if (doge->name == NULL)
  {
free(doge->nane);
free(doge);
return (NULL);
  }
for (k= 0; k <= i; k++)
doge->name[k] = name[k];
 doge->age = age;
doge->owner = malloc(j * sizeof(doge->owner));
if (doge->owner == NULL)
  {
free(doge->owner);
free(doge->name);
free(doge);
return (NULL);
  }
for (k = O; k <= j; k++)
doge->owner[k] = owner[k];
return (doge);
}
