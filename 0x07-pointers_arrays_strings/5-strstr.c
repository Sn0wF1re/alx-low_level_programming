#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: substring
 *
 *Return: pointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *x, *y;

	while (*haystack != '\0')
	{
		x = haystack;
		y = needle;
		while (*haystack != '\0' && *y != '\0' && *haystack == *y)
		{
			haystack++;
			y++;
		}
		if (!*y)
		{
			return (x);
		}
		haystack = x + 1;
	}
	return ('\0');
}
