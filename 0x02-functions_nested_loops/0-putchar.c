#include "main.h"
#include <stdio.h>

/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
	char str[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
	return (0);
}
