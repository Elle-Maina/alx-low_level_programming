#include <stdio.h>

/**
 * main - To print numbers from 0 to 9.
 *
 * Return: 0 always  (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
