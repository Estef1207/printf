/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:07:19 by esmeza-s          #+#    #+#             */
/*   Updated: 2025/01/28 18:52:33 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(char const *str, ...);
void	ft_putc(char c, size_t *count);
void	ft_puts(char *str, size_t *count);
void	ft_putp(void *ptr, size_t *count);
void	ft_putnum_u(unsigned long long num, size_t *count, int base, char *dig);
void	ft_putnum_signed(long long num, size_t *count, int base, char *dig);

#endif
