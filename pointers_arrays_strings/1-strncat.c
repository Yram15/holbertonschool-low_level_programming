#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input vale
* @src: input vale    
* @n: input valechar *_strcat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[i] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0'; 
return (dest);
}
