#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the lowercase alphabet, followed by the uppercase alphabet,
 * and then a new line. It uses the putchar function to achieve this.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
