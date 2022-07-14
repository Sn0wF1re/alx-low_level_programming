#include "main.h"
/**
 *cap_string - Capitalize a string
 *@str: String to be capitalized
 *
 *Return: String
 */
char *cap_string(char *str)
{
	int x, y;
	char sepr[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	x = 0;
	if (str[x] >= 97 && str[x] <= 122)
	{
		str[x] -= 32;
	}
	x++;

	while (str[x] != '\0')
	{
		for (y = 0; y < 13; y++)
		{
			if (str[x] == sepr[y])
			{
				if (str[x + 1] >= 97 && str[x + 1] <= 122)
				{
					str[x + 1] -= 32;
					break;
				}
			}
		}
		x++;
	}
	return (str);
}
