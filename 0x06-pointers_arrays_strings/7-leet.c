#include "main.h"
/**
 *leet - encodes a string into 1337
 *@str: string
 *
 *Return: string
 */
char *leet(char *str)
{
	int x = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};


	while (*(str + x) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + x) == lower[i] || *(str + x) == upper[i])
			{
				*(str + x) = num[i];
				break;
			}
		}
		x++;
	}
	return (str);
}
