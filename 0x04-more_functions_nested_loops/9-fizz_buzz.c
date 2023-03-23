#include <stdio.h>

/**
 * main - print the number from 1 t0 100
 * but for multiple of three print fizz instead
 * and  for the multiple of five prints buzz
 * Return: Always 0 ( success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}else if (i == 1)
		{
			printf(" %d", i);
		}else
		{
			printf(" %d, i);
		}
	}
}

