#include <stdio.h>
/**
 *main - print name of file that program was compiled from
 *Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}