#include "main.h"

/**
 * write_int - prints an int
 * @args: input va_list
 * Return: no of char printed
 */
int write_int(va_list args)
{
	int int_input;

	int_input = va_arg(args, int);
