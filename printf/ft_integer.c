#include "printf.h"

int ft_integer(int num)
{
    if (num >= 10)
        ft_integer(num / 10);
    ft_putchar((num % 10) + '0');
    return (1);
}