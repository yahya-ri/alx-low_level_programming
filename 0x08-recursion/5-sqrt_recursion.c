#include "main.h"

/**
 *
 *
 */


int _sqrt_recursion(int n)
{
	int start, end, mid, square;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	start = 0;
	end = n;

	while (start <= end)
	{
		mid = start + (end - start) / 2;
		square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	return (-1);
}
