/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:14:01 by smarco            #+#    #+#             */
/*   Updated: 2022/11/03 17:50:20 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_count_digit(unsigned int num)
{
	if (num / 10 == 0)
		return (1);
	else
		return (1 + ft_count_digit(num / 10));
}

void	ft_fill(char *str, unsigned int num, unsigned int size)
{
	if (num >= 10)
		ft_fill(str, (num / 10), (size -1));
	str[size] = (num % 10) + '0';
}	

char	*ft_itoa(unsigned int num)
{
	unsigned int	size;
	char			*str;

	size = ft_count_digit(num);
	str = malloc(size + 1);
	if (!str)
		return (0);
	str[size--] = '\0';
	str = ft_fill(str, num, size);
	ft_putstr(str);
	return (str);
}
