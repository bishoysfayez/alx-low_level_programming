#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  _strcat-Entry point
 *  Description:  concatenates two strings
 *  to the end of the string pointed to by @dest.
 *  @dest: A pointer to the string to be concatenated upon.
 *  @src: The source string to be appended to @dest.
 *  Return: char * dest (Success)
 */

char *_strcat(char *dest, char *src)
{
	char new_string[strlen(dest) + strlen(src) - 1];
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		new_string[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		new_string[i] = src[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	strcpy(dest, new_string);
	return (dest);
}
