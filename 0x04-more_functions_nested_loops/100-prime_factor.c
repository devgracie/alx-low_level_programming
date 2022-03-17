#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: 0 (Success)
 */

int main(void)
{
	long int num, primef;

	num = 612852475143;
	for (primef = 2; primef <= num; primef++)
	{
		if (num % primef == 0)
		{
			num /= primef;
			primef--;
		}
	}
	printf("%ld\n", primef);
	return (0);
}
