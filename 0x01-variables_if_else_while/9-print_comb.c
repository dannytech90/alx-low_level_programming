#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints all possible combinations of single-digit numbers
 * separated by ,, followed by a space. It uses the putchar function to achieve this.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	for (digit = 0; digit < 10; digit++)
	{
	putchar(digit + '0');
	if (digit < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
