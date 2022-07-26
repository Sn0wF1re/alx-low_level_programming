#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *str_concat - concatenates two strings
 *@s1: string
 *@s2: string
 *
 *Return: pointer to contents of s1
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int total, x, y;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	total = strlen(s1) + strlen(s2);
	arr = malloc(total * sizeof(char) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < strlen(s1); x++)
	{
		arr[x] = s1[x];
	}
	for (y = 0; y < strlen(s2); y++)
	{
		arr[x] = s2[y];
		x++;
	}
	arr[x + 1] = '\0';
	return (arr);
}
