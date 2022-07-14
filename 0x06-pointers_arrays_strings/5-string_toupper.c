#include "main.h"
/**
 *string_toupper - Change string characters from lowercase to uppercase
 *@str: String whose contents are to be modified
 *
 *Return: String
 */
char *string_toupper(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
