/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:07:25 by smarco            #+#    #+#             */
/*   Updated: 2022/11/04 15:25:59 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_check(va_list arg, const char *str);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_hexa(int num, int maj);
int		ft_integer(int num);

void	ft_putstr(char *str);
char	ft_itoa(int num);

#endif
