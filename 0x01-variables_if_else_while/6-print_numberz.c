#include <stdio.h>

/**
 * main - To print numbers from 0 to 9.
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
