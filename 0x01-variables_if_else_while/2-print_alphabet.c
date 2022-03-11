#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);

	return (0);
}
