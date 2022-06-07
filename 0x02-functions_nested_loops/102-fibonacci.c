#include <stdio.h>
/**
 * main - enter main
 *
 * Return: 0 success
 */
int main(void)
{
	long int i;
	long int bef = 1;
	long int aft = 2;

	printf("%lu", bef);
	for (i = 1; i < 50; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	printf("\n");
	return (0);
}
