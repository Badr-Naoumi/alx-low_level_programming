#include "main.h"
/**
 * _sqrt_helper - Finds the natural square root using binary search.
 * @n: The number to find the square root of.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 *
 * Return: The square root of the number if found, -1 if not.
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid, result;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;
	result = mid * mid;

	if (result == n)
		return (mid);
	else if (result < n)
		return (_sqrt_helper(n, mid + 1, high));
	else
		return (_sqrt_helper(n, low, mid - 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of the number. If n is negative, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0, n));
}
