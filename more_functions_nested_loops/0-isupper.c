#include "main.h"

/**
*_isupper - checks if a character is uppercase or not
*@c: character to be tesed
*Return: (1) for true (0) false
*
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
