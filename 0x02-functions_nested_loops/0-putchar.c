#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char chaine[] = "_putchar\n";
	int i = 0;

	while (chaine[i])
	{
		_putchar(chaine[i]);
		i++;
	}
	return (0);
}