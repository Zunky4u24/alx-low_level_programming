#include <stdio.h>
/**
 * main - Entry point
 * decription: 'A program that print number in base 10 usin putchar'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar ('\n');
	return (0);
}
