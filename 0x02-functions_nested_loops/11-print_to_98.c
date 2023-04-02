#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
        int i;

        for (i = n; n <= 98 ? i <= 98 : i >= 98; n <= 98 ? i++ : i--)
        {
                printf("%d", i);
                if (i != 98)
                        printf(", ");
        }
        printf("\n");
}
	
