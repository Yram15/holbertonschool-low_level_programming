#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes the first letter of each word in a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *str)
{
    char *ptr;

    for (ptr = str; *ptr; ptr++)
    {
        if (isspace((unsigned char)*(ptr - 1)) || !isalpha((unsigned char)*(ptr - 1)))
        {
            if (islower((unsigned char)*ptr))
                *ptr = toupper((unsigned char)*ptr);
        }
    }
    return (str);
}
