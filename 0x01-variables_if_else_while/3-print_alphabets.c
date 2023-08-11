#include <stdio.h>
/**
 * main - Entry point
 * Description: Stuff
 * Return: 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
