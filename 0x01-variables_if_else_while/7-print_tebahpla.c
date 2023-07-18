#include <stdio.h>

/**
 * main - point input
 *
 * Description: print a-z in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
