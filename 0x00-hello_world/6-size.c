#include<stdio.h>
/**
 * main-Entry point
 * Description: program prits sizes of different types of c variables 
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char : %i byet(s)\n", sizeof(char));
	printf("Size of int : %i byet(s)\n", sizeof(int));
	printf("Size of long int is : %i byet(s)\n", sizeof(long int));
	printtf("Size of long long is : %i byet(s)\n", sizeof(long long));
	printf("Size of flaot is : %i byet(s)\n", sizeof(float));
	return (0);
}
