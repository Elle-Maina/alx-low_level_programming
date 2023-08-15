#include <stdio.h>

/**
 * main - This prints the lowercase alphabet in reverse,
 * to be followed by a new line
 * Return: Always 0 (Success).
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
