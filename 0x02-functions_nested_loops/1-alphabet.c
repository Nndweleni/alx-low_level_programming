#include <stdio.h>
/**
 * print_alphabet - Printing alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);
		_putchar("\n");
}