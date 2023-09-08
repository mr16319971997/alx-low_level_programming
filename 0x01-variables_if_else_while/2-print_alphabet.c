#include <stdio.h>

/**
 * main - main function
 * Description:printing alphabets in lowercase
 * Return: Return
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
