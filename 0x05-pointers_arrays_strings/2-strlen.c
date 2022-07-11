/**
 *_strlen - Returns length of a string
 *@s: string
 *
 *Return: 0
 */
int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}
