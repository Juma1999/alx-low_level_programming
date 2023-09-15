#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while(i--)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
