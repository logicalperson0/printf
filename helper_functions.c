#include "holberton.h"

/**
 * print_c - prints a char
 * @valist: va_list with next argument
 *
 * Return: 1
 */
int print_c(va_list valist)
{
    char c = va_arg(valist, int);

    _putchar(c);

    return (1);
}

/**
 * print_s - prints a string
 * @valist: va_list with next argument
 *
 * Return: number of chars printed
 */
int print_s(va_list valist)
{
    char *s = va_arg(valist, char *);
    int i, count = 0;

    if (s == NULL)
        s = "(null)";

    for (i = 0; s[i] != '\0'; i++)
    {
        _putchar(s[i]);
        count++;
    }

    return (count);
}

/**
 * print_d - prints an integer
 * @valist: va_list with next argument
 *
 * Return: number of chars printed
 */
int print_d(va_list valist)
{
    int n = va_arg(valist, int);
    int count = 0;

    if (n < 0)
    {
        _putchar('-');
        count++;
        n = -n;
    }

    count += print_recursive_number(n);

    return (count);
}

/**
 * print_recursive_number - prints an integer recursively
 * @n: number to print
 *
 * Return: number of chars printed
 */
int print_recursive_number(unsigned int n)
{
    int count = 0;

    if (n > 9)
        count += print_recursive_number(n / 10);

    _putchar(n % 10 + '0');
    count++;

    return (count);
}
