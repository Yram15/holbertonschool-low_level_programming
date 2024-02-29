#include "main.h"
/**
* _strncpy - C function that copies a string
* @dest: buffer storing the string copy
* @src: the source strig
* @n: max number of bety copied
* Return: 'dest' edited string
*/
char *_strcat(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest)
}
