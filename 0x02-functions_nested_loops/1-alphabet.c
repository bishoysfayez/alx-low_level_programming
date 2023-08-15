#include "main.h"

/**
 * print_alphabet-Entry point
 * Description: prints lowercase alphabet
 * Return: Always void (Success)
 */
void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
