#include <stdio.h>

/**
 * main - point input
 *
 * Discription: using size of to print the size of various types
 *
 * Return: Awlays 0 (success)
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n",sizeof(char));
	printf("size of an int: %lu byte(s)\n",sizeof(int));
	printf("size of a long int: %lu byte(s)\n",sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n",sizeof(long long int));
	printf("size of a float: %lu byte(s)\n",sizeof(float));
	return (0);
}
