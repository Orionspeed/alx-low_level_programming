#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;
	char alp;

	for (digit = 0; digit < 10; digit++)
		putchar ((digit % 10) + '0');

	for (alp = 'a'; alp <= 'f'; alp++)
		putchar (alp);

	putchar ('\n');
	return (0);
}
