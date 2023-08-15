#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the lowercase alphabet in reverse,
 * followed by a new line. It uses the putchar function to achieve this.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
