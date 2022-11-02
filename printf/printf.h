#ifndef PRINT_H
# define PRINT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

int     ft_check(va_list arg, const char *str);
int     ft_printf(const char *str, ...);
int    ft_putchar(char c);

#endif