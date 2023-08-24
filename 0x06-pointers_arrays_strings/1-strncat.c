#include "main.h"

/**
 *  _strncat-Entry point
 *  Description:  concatenates two strings
 *  to the end of the string pointed to by @dest.
 *  @dest: A pointer to the string to be concatenated upon.
 *  @src: The source string to be appended to @dest
 *  @n : int of num to stop concat 
 *  Return: char * dest (Sucess)
 */
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n)
{
	char new_string[_strlen(dest) + n - 1];
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		new_string[i] = dest[i];
		i++;
	}
	while (src[j] != '\0' && j <= n)
	{
		new_string[i] = src[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	strcpy(dest, new_string);
	return (dest);
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
