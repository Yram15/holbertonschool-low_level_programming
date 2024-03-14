#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameter passd to the function
 * @n: number of argument to be passed to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list holder;

	if (n == 0)
		return (0);

	va_start(holder, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(holder, const unsigned int);
	}
	va_end(holder);

	return (sum);
}
