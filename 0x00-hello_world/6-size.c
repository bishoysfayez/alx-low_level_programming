#include<stdio.h>
/**
 * main-Entry point
 * Description: program prits sizes of different types of c variables
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int is: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long is: %i byte(s)\n", sizeof(long long));
	printf("Size of a float is: %i byte(s)\n", sizeof(float));
	return (0);
}
