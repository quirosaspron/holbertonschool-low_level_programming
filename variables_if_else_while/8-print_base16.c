#include <stdio.h>
/*
 *
 */
int main(void)
{
	char c;
	char b;

	for (c = '0'; c <= '9'; ++c)
		putchar(c);
	for (b = 'a'; b<='f'; ++b)
		putchar(b);
	putchar('\n');
	return (0);
}
