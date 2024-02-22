#include "main.h"

/**
*_isupper - checks if parameters is a digit or character
*
*@c: parameters
*Return: 1 if its a number and 0 otherwise
*/

int _isupper(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
	return (0);
}
}
