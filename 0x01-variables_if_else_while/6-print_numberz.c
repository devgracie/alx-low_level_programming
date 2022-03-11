#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 *
 * Description: print single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i;

    i = 48;

    while (i < 58)
    {
        putchar(i);
        i++;
    }

    putchar(10);

    return (0);
}
