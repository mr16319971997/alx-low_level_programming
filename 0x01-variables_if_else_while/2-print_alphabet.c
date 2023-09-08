#include <stdio.h>

/**
 * main -Entery point
 *
 * Description: A C program that prints with put function
 *
 * Return: Alawyz 0(Scuccess)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}
