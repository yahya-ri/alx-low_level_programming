#include "main.h"

/**
 * _sqrt_r - finde the integer square root of a given number.
 * @start: the start of the index of the range.
 * @end: the end of the index of the range.
 * @n: the input.
 * Return: return the integer square root.
 */

int _sqrt_r(int n, int start, int end)
{
	int mid, square;

	if (start > end)
	{
		return (-1);
	}

	mid = start + (end - start) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_r(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_r(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - prevents it from being called with a negative value..
 * @n: the input.
 * Return: return square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_r(n, 0, n));
}
