#include "main.h"

/**
 * print_lin -draws a straigt line in the terminal
 * @n: number of times the character _ should be print
 */
void print_line(int n)
{
        if (n <= 0)
        {
                _putchar('\n');
        } else
        {
                int i;

                for (i = 1; i <= n; i++)
                {
                        _putchar('_');
                }
                -putchar('\n');
        }
}
