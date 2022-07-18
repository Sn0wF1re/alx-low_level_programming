#include "main.h"
/**
 *_strspn - Returns the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 *@s: string
 *@accept: bytes accepted
 *
 *Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, z;

	for (x = 0; s[x] != '\0'; x++)
	{
		y = 1;
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
			{
				y = 0;
				break;
			}
		}
		if (y == 1)
		{
			break;
		}
	}
	return (x);
}
