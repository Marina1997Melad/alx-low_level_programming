#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 *description: 'prints the alphabets in lowercase'
 *Return: always 0
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
