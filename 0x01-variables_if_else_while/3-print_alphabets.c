#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;

    i = 97;
    j = 65;

    while (i < 123)
    {
        putchar(i);
        i++;
    }

    while (j < 91)
    {
        putchar(j);
        j++;
    }

    putchar(10);

    return (0);
}
