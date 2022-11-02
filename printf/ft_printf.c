#include "printf.h"

int     ft_printf(const char *str, ...)
{
        va_list arg;
        int     result;

        va_start(arg, str);
        result = ft_check(arg, str);
        va_end(arg);
        return (result);
}

int main()
{
        char c = 'S';

        ft_printf("couou ,%c, voila.", c);
        return (0);
}
