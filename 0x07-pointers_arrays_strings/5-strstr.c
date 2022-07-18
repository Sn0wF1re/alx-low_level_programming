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
	int x;

	if (*needle == 0)
	{
		return (haystack);
	}
	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == *needle)
		{
			return (haystack + x);
		}
	}
	return ('\0');
}
