/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:06:54 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/01/23 20:07:02 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putall(va_list va, char *str, size_t *count)
{
	if (*str == 'c')
		ft_putc(va_arg(va, int), count);
	else if (*str == 's')
		ft_puts(va_arg(va, char *), count);
	else if (*str == 'p')
		ft_putp(va_arg(va, void *), count);
	else if (*str == 'i' || *str == 'd')
		ft_putnum_signed(va_arg(va, int), count, 10, "0123456789");
	else if (*str == 'u')
		ft_putnum_u(va_arg(va, unsigned int), count, 10, "0123456789");
	else if (*str == 'x')
		ft_putnum_u(va_arg(va, unsigned int), count, 16, "0123456789abcdef");
	else if (*str == 'X')
		ft_putnum_u(va_arg(va, unsigned int), count, 16, "0123456789ABCDEF");
	else if (*str == '%')
		ft_putc('%', count);
}

int	ft_printf(char const *str, ...)
{
	va_list	print;
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	va_start(print, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_putall(print, (char *)str, &count);
		}
		else
			ft_putc(*str, &count);
		str++;
	}
	va_end(print);
	return (count);
}
