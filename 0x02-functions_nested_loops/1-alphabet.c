#include "main.h"

/**
** main - Prints the alphabets in lowrcase.
** Return: Always 0.
**/

/**
* * print_alphabet - prints the alphabet in lowercase.
* */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

