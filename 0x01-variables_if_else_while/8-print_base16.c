#include <stdio.h>

/**
 * main - main block
 *
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	for (i = 97; i < 103; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
