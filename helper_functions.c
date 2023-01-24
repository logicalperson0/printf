#include "main.h"

/**
 * print_c - prints a char
 * @valist: va_list with next argument
 *
 * Return: 1
 */
int print_c(va_list varlist)
{
    char c = va_arg(varlist, int);

    _putchar(c);

    return (1);
}

/**
 * print_s - prints a string
 * @varlist: var_list with next argument
 *
 * Return: number of chars printed
 */
int print_s(var_list varlist)
{
    char *s = va_arg(varlist, char *);
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
 * @varlist: va_list with next argument
 *
 * Return: number of chars printed
 */
int print_d(va_list varlist)
{
    int n = va_arg(varlist, int);
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
