#include "printf.h"

int ft_compare(const char c, va_list arg)
{
        int rslt;

        if (c == 'c')
                ft_putchar(va_arg(arg, int));
        return(rslt);
}
int     ft_check(va_list arg, const char *str)
{
        int     result;
        int     i;

        i = 0;
        while (str[i])
        {
                if (str[i] == '%')
                {
                        result = ft_compare(str[i + 1], arg);
                        i++;
                }
                else
                        ft_putchar(str[i]);
                i++;
        }
        return (result);
}
