#include "main.h"
/**
 *_memcpy - copies n bytes from src to dest
 *@dest: where bytes are to copied to
 *@src: where bytes are copied from
 *@n: number of bytes to be copied
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
