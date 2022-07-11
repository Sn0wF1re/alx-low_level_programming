#include "main.h"
/**
 *_strcpy - copy string pointed to by src to buffer pointed to by dest
 *@dest: Points to where string is copied
 *@src: Points to where string is copied from
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
