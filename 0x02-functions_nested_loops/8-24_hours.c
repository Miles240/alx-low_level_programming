#include "main.h"

/**
 * jack_bauer - prints the time format
 * @void: parameter
 *
 * Return: Always 0
*/

void jack_bauer(void)
{
	int day, hour;

	day = 0;

	while (day < 24)
	{
		hour = 0;
		while (hour < 60)
		{
			_putchar((day / 10) + '0');
			_putchar((day % 10) + '0');
			_putchar(':');
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar('\n');
			hour++;
		}

		day++;

		if (day == 24)
		{
			break;
		}
	}
}
