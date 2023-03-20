#include <stdio.h>
/**
 * print_alphabet - Printing alphabets
 *
 * main - Printing the code above
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
int main(void)
{
	print_alphabet();
	return (0);
}
