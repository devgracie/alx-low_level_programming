#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Description: print double digit combos. Digits must be different. Only smallest combination
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;

    i = 48;
    j = 48;

    while (i < 58)
    {
        j = i + 1;
        while (j < 58)
        {
            putchar(i);
            putchar(j);

            if (i < 56 || j < 57)
            {
                putchar(44);
                putchar(32);
            }
            j++;
        }

        i++;
    }

    putchar(10);

    return (0);
}
