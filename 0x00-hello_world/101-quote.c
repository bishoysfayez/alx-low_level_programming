#include<stdio.h>
#include<unistd.h>
/**
 * main-Entry point
 * Description: 'the program prints the following quote
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 57);
	putchar('\n');
	return (1);
}
