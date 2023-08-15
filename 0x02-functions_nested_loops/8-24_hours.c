#include "main.h"

/**
 * jack_bauer-Entry point
 * Description: prints every minute form 00:00 to 23:59
  * Return: always 0
 */
void jack_bauer(void)
{
	int i, j, k, n;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (n = 0; n < 9; n++)
				{
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(":");
					_putchar(k + 48);
					_putchar(n + 48);
					_putchar('\n');
				}
			}

		}
	}

}
