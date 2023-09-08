#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (a > 0)
		printf("%d is positive", a);
	else if (a >= 0)
		printf("%d is zero", a);
	else if (a < 0)
		printf("%d is negative", a);
	printf("\n");
	return (0);
}
