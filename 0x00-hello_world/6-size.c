#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fprintf(stderr,"Size of a char: %2d byte(s)\n", sizeof(char));
	fprintf(stderr,"Size of an int: %2d byte(s)\n", sizeof(int));
	fprintf(stderr,"Size of a long int: %2d byte(s)\n", sizeof(long int));
	fprintf(stderr,"Size of a long long int: %2d byte(s)\n", sizeof(long long int));
	fprintf(stderr,"Size of a float: %2d byte(s)\n", sizeof(float));
	return (0);
}
