#include <stdio.h>

/**
 * main - point input
 *
 * Description: print all single digit numbers
 *
 * Return: ralways 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
