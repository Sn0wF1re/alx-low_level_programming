/**
 *swap_int - Swap the values of two integers
 *@a: integer
 *@b: integer
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
