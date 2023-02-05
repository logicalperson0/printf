#ifndef _main_h_
#define _main_h_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct all - func specifier struct for printf
 * @k: char type;
 * @fptr: func ptr to print func
 */

typedef struct all
{
	char k;
	int (*fptr)(va_list);
} printing;

int(*compare_f(const char c))(va_list);

int _printfchar(char c);
int _printfs(va_list str);
int printingc(va_list chars);
int _printf(const char *format, ...);

int write_int(va_list args);

int u_ints(va_list uints);
int o_eight(va_list oeights);
int x_hexadec(va_list hexa);
int printhexa(int a);

int binary_p(va_list ints);

#endif
