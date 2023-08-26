#include "main.h"

/**
 *  _strcmp-Entry point
 *  Description:  compares 2 strings
 *  @s1: first string
 *  @s2: second string
 *  Return: int(Sucess) 0 if not same strings, 1 if same strings
 *  0, if the s1 and s2 are equal;
 *  a negative value if s1 is less than s2;
 *   a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
}
