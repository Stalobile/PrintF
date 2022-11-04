/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:14:01 by smarco            #+#    #+#             */
/*   Updated: 2022/11/03 17:47:57 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_count_digit(int num)
{
	if (num < 0)
		return (1 + ft_count_digit(-num));
	if (num / 10 == 0)
		return (1);
	else
		return (1 + ft_count_digit(num / 10));
}

void	ft_fill(char *str, int num, int size)
{
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	if (num >= 10)
		ft_fill(str, (num / 10), (size -1));
	str[size] = (num % 10) + '0';
}	

char	*ft_itoa(int num)
{
	int		size;
	char	*str;

	size = ft_count_digit(num);
	str = malloc(size + 1);
	if (!str)
		return (0);
	str[size--] = '\0';
	str = ft_fill(str, num, size);
	ft_putstr(str);
	return (str);
}
