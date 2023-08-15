#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the lowercase alphabet, excluding 'q' and 'e',
 * followed by a new line. It uses the putchar function to achieve this.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
	}
	putchar('\n');
	return (0);
}
