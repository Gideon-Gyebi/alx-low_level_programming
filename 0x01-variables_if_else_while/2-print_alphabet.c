#include <stdio.h>

/**
 * main - Print the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26; i++)
	{
		printf(alp[i]);
	}
	putchar('\n');
	return (0);
}
