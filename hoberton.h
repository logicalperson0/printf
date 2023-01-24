#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int _write(char *s, int len);

int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_u(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_b(va_list args);
int print_S(va_list args);
int print_p(va_list args);
int print_plus(va_list args);
int print_space(va_list args);
int print_hash(va_list args);
int print_l(va_list args);
int print_h(va_list args);
int print_r(va_list args);
int print_R(va_list args);

#endif
