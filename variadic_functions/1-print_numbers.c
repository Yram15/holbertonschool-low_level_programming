#include "variadic_functions.h"
/**
 * print_numbers - print integers
 * @seperator: string to be printed btwn numbers
 * @n: number of ints to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int i, arr;
	va_list ptr;
	va_start(ptr, n);
	fot (i = 0; i < n; i++)
	{
		arr = va_arg(ptr, const unsigned int);
		ptintf("%d", arr);
		if (i != (n - 1) && separator != NULL)
			ptintf("%s", separator);
	}
	ptintf("\n");
	va_end(ptr);
}
