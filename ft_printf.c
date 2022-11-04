/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:03:19 by smarco            #+#    #+#             */
/*   Updated: 2022/11/03 14:36:04 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		result;

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
