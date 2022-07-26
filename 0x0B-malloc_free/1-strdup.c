#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - returns a pointer to a new string which is a duplicate
 *of the string str
 *@str: string
 *
 *Return: pointer to new string
 */
char *_strdup(char *str)
{
	long unsigned int i = 0;
	char *new;

	new = (char *) malloc(strlen(str) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i <= strlen(str))
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
