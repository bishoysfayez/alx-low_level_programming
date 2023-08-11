#include <stdio.h>

/**
 * main-Entry point
 * Description: prints digitswith comma separator
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(' ');
	}
	putchar(57);
	return (0);
}
