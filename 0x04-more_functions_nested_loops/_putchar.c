#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:The character to print
 * Return:one on success negative one on error 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
