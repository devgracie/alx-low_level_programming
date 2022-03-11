#include <stdio.h>

/**
 * main - program that prints all possible combinations of two two-digit numbers.
 *
 * Description: program that prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int first, second, num1, num2;

    first = 48;
    while (first < 58)
    {
        second = 48;
        while (second < 58)
        {
            num2 = second + 1;
            num1 = first;
            while (num1 < 58)
            {
                while (num2 < 58)
                {
                    putchar(first);
                    putchar(second);
                    putchar(32);
                    putchar(num1);
                    putchar(num2);
                    if (first < 57 || second < 56 || num1 < 57 || num2 < 57)
                    {
                        putchar(44);
                        putchar(32);
                    }
                    num2++;
                }
                num2 = 48;
                num1++;
            }
            second++;
        }
        first++;
    }
    putchar(10);
    return (0);
}
