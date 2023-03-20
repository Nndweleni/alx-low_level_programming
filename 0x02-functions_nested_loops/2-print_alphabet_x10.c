#include <stdio.h>
/**
 * print_alphabet_x10 - Prints out the alphabets ten times and a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int x;

	x = 0;

	while (x < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar("\n");
		x++;
	}
}
/**
 * main - Prints the above code
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
