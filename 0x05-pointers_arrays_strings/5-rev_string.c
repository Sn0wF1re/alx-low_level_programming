#include "main.h"
/**
 *rev_string - Reverse order of string
 *@s: string
 *
 *Return: nothing
 */
void rev_string(char *s)
{
	int i, temp, l;

	i = 0;
	l = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > l)
	{
		temp = s[i];
		s[i--] = s[l];
		s[l++] = temp;
	}
}
