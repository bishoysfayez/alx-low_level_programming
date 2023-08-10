#include<stdio.h>
/**
 * main-Entry point
 * Description: program prits sizes of different types of c variables
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char : %i byte(s)\n", sizeof(char));
	printf("Size of int : %i byte(s)\n", sizeof(int));
	printf("Size of long int is : %i byte(s)\n", sizeof(long int));
	printf("Size of long long is : %i byte(s)\n", sizeof(long long));
	printf("Size of flaot is : %i byte(s)\n", sizeof(float));
	return (0);
}
