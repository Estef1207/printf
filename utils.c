/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:28:49 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/01/28 18:51:50 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putc(char c, size_t *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_puts(char *str, size_t *count)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putc(*str, count);
		str++;
	}
}

void	ft_putnum_u(unsigned long long num, size_t *count, int base, char *dig)
{
	char	buffer[20];
	int		i;

	i = 0;
	if (num == 0)
	{
		ft_putc('0', count);
		return ;
	}
	while (num > 0)
	{
		buffer[i++] = dig[num % base];
		num /= base;
	}
	while (i > 0)
		ft_putc(buffer[--i], count);
}

void	ft_putnum_signed(long long num, size_t *count, int base, char *dig)
{
	char	buffer[20];
	int		i;

	if (num == 0)
		return (ft_putc('0', count));
	if (num < 0)
	{
		ft_putc('-', count);
		if (num == LLONG_MIN)
			return (ft_puts("9223372036854775808", count));
		num = -num;
	}
	i = 0;
	while (num)
	{
		buffer[i++] = dig[num % base];
		num /= base;
	}
	while (i--)
		ft_putc(buffer[i], count);
}

void	ft_putp(void *ptr, size_t *count)
{
	unsigned long long	ptr2;

	if (!ptr)
	{
		ft_puts("(nil)", count);
		return ;
	}
	ptr2 = (unsigned long long)ptr;
	ft_puts("0x", count);
	ft_putnum_u(ptr2, count, 16, "0123456789abcdef");
}
