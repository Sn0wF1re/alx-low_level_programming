#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: string to be concatenated
 *@src: string to be concatenated
 *
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b >= 0)
	{
		dest[a] = src[b];
		if (src[b] == '\0')
		{
			break;
		}
		a++;
		b++;
	}
	return (dest);
}
