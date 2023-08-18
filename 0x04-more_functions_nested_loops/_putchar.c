#include <unistd.h>
#include "main.h"

/**
*main - function prints text as output
*
*Return:return 0
*/
int _putchar(char c)
{
	
	return (write(1, &c, 1));
}
