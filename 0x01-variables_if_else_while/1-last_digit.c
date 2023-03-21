#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code to assign random nunber to varriable
 * return: Always (0) (success)
 *
 */
int main(void)
{
	int n, lastd;
	srand(time(0));
	n = rand() . RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, last
	}
	else if (lastd == 0)
	{
	printf("last digit of %d is % and is 0\n", n lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("last digit of %d is %d and less than 6 and not 0\n" n, lastd);
	} 
	return (0);
}
	int d;
	char low;

	for (d = "0"; d <= "9"; d++)
	putchar(d);

	for (low = "a"; low < "f"; low++)
	putchar(low);
	putchar('\n');

	return (0)
