#include "main.h"
/**
 *_strspn - calculate length of initial segment of s
 *that contains substring accept
 *@s: string
 *@accept: substring
 *
 *Return: number of characters in s with substring accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	
	while (s[i] == accept[i])
	{
		i++;
	}
	i++;
	return (i);
}
