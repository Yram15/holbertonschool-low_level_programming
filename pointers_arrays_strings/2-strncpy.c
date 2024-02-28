#include "main.h"
/**
* _strncpy - copy a string
* @dest: input vale
* @src: input vale    
* @n: input vale
* Return: dest
*/
char *_strcat(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[i] = src[i];

        for ( ; i < n; i++)
                dest[i] = '\0';

        return (dest);
}
