#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - To print the alphabet without q and e.
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
