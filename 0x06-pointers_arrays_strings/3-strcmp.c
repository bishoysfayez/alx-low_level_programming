#include "main.h"

/**
 *  _strcmp-Entry point
 *  Description:  compares 2 strings
 *  @s1: first string
 *  @s2: second string
 *  Return: int(Sucess) 0 if not same strings, 1 if same strings
 */
int _strlen(char *s);
int _strcmp(char *s1, char *s2)
{
	int i;

	if (_strlen(s1) == _strlen(s2))
	{
		for (i = 0; i < _strlen(s1); i++)
		{
			if (s1[i] != s2[i])
			{
				return (0);
			}
		}
		return (1);

	}
	else
	{
		return (1);
	}
}

/**
 * _strlen- returns the length of a string
 * @s: String whose length we will determine
 * Return: Length of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length++;
	return (length);
}
