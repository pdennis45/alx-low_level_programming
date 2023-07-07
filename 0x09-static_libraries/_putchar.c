#include <unistd.h>
/**
 * _putchar -  function declaration
 * accepts the character c as argument
 * @c: is the printed character
 * Return: -1 on error amd 1 on success
 */

/* betty style doc for function _putchar goes there */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
