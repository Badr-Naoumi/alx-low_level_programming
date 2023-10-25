/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the given number. If n is less than 0, returns -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		int result = 1;

		for (int i = 2; i <= n; i++)
		{
			result *= i;
		}
		return (result);
	}
}
