#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	i = "00:00";
	while (i < "24:00")
	{
		_putchar(i);
		i++;
	}
}
