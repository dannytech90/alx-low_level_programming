#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the alphabet in lowercase, followed by a new line.
 * It uses the putchar function to achieve this.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
    putchar('\n');

    return (0);
}
