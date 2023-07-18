#include <stdio.h>

/**
 * main - point input
 *
 * Description: print 0-9 using putchar
 *		while using int variable
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int digit = 0;

		while (digit <= 9)
		{
			/*covert digit to ASCII representation*/
			putchar(digit + '0');
			digit++;
		}
	putchar ('\n');

	return (0);
}

