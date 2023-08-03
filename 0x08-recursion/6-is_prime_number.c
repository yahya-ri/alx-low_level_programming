#include "main.h"

/**
 * is_divisible - Helper function to check if n is divisible by i.
 * @n: The integer to be checked for divisibility.
 * @i: The current divisor being checked, starting from 2.
 * Return: 1 if n is not divisible by any integer, 0 otherwise.
 */


int is_divisible(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0 || n < 2)
	{
		return (0);
	}
	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to be checked for primality.
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (n < 2 ? 0 : is_divisible(n, 2));
}
