#include <stdio.h>
/**
*main - Print 1-100, if divisible by 5, print Buzz, divisible by 3,
*print Fizz, divisible by both 3 and 5, print FizzBuzz,
*otherwise, print number
*Return: 0
*/
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
