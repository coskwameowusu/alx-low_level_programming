#include "main.h"
#include <stdio.h>
/**
 * _putchar - prints all alphabets in lowercase
 * Return: 1 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
}
