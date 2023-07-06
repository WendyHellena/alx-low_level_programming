#include "main.h"
/**
 * factorial - a function that returns the factorial of the given number
 * @n: the number to do factorialization on
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
