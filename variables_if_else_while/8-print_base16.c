#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char b;

	for (c = '0'; c <= '9'; ++c)
		putchar(c);
	for (b = 'a'; b <= 'f'; ++b)
		putchar(b);
	putchar('\n');
	return (0);
}
