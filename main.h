#ifndef _main_h_
#define _main_h_

#include <stdarg.h>
#include <unistd.h>

int _printfchar(char c);
int _printfs(char *c);
int _strlen(char *s);
/*int print_percent(va_list type);*/
int _printf(const char *format, ...);

#endif
