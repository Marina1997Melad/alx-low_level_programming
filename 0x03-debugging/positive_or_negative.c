#include "main.h"
/**
*main - Entry point
*Description: tests function that prints if integer is positive or negative or zero
*Return: always 0
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
