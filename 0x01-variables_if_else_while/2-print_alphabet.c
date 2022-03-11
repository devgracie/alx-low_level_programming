#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i = 97;

    while (i < 123)
    {
        putchar(i);
        i++;
    }
    putchar(10);

    return (0);
}
