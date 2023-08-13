#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main Entry point of the program
 *
 * This function generates random numbers, if positive, negative or zero,
 * the number generated is printed out together with the corresponding attribute.
 * i.e positive if greater than 0, negative if less than 0 and zero if 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else {
		printf("%d is zero\n", n);
	}
	return (0);
}
