#include <stdio.h>
/**
 * Entry Point - This program will display the various types of sizes on the computer that it is compiled on.
 *
 * Return: 0
 *
 */
int main (void)
{
	char size1;
	int size2;
	long int size3;
	long long int size4;
	float size5;

printf("Size of a char: %lu byte(s)\n", (unsigned long)
sizeof (size1);
printf("Size of a int: %lu byte(s)\n", (unsigned long)
sizeof (size2);
printf("Size of a long int: %lu byte(s)\n", (unsigned long)
sizeof (size3);
printf("size of a long long int: %lu byte(s)\n", (unsigned long)
sizeof (size4);
printf("Size of a float: %lu byte(s) \n", (unsigned long)
sizeof (size5);
return (0);
