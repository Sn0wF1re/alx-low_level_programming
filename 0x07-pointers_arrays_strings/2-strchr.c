#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: character
 *
 *Return: character
 */
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (s + x);
		}
		x++;
	}
	return ('\0');
}
