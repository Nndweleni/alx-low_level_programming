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
/**
 * main - Printing the code above
 *
 * Return: 0
 */
int main(void)
{
	prinst_alphabet();
	return (0);
}
