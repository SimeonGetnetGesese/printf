#include "holberton.h"

/**
 *flag_plus - uses to add +.
 *@list: va_list from _printf.
 *flag_space - uses to add empty space.
 */
int flag_plus(va_list list)
{
	unsigned long int add = (unsigned long int)va_arg(list, void *);

	if (add > 0)
	{
		_putchar('+');
	}
	return (1);
}
int flag_space(va_list list)
{
if
