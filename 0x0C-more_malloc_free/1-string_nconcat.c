#include "main.h"
/**
 *string_nconcat - concatenates two strings
 *@s1: string
 *@s2: string
 *@n: no. of bytes
 *
 *Return: pointer to allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strconcat;
	unsigned int x, y, length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length = strlen(s1) + strlen(s2) + 1;
	strconcat = (char *) malloc(sizeof(char) * length);
	if (strconcat == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != 0; x++)
	{
		strconcat[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		strconcat[x] = s2[y];
		x++;
	}
	return (strconcat);
}
