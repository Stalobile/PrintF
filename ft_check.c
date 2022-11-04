/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:02:20 by smarco            #+#    #+#             */
/*   Updated: 2022/11/04 15:25:33 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_compare(const char c, va_list arg)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int));
	if (c == '%')
		ft_putchar('%');
	if (c == 's')
		ft_putstr(va_arg(arg, char *));
	if (c == 'i' || c == 'd')
		ft_itoa(va_arg(arg, int));
	if (c == 'p')
		ft_void(va_arg(arg, uinptr_t), 1);
	if (c == 'u')
		ft_utoa(va_arg(arg, unsigned int));
	if (c == 'x')
		ft_hexa(va_arg(arg, int), 0);
	if (c == 'X')
		ft_hexa(va_arg(arg, int) 1);
	return (1);
}

int	ft_check(va_list arg, const char *str)
{
	int	result;
	int	i;

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
