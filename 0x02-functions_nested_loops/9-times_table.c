#include "main.h"

/**
 * times_table-Entry point
 * Description: prints time table of digits 0 to 9
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j / 10 != 0 || j  == 0)
			{
				_putchar(48 + (i * j / 10));
			}
			else
			{
				_putchar(' ');
			}
			_putchar(48 + (i * j % 10));
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
