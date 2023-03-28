/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:27:43 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/28 14:01:31 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include "libft.h"

void		ft_put_hex(unsigned int num, const char format);
void		ft_put_ptr(uintptr_t nb);
int			ft_len(int n);
int			hex_len(unsigned int num);
int			len_ptr(uintptr_t nb);
int			ft_unsigned_len(unsigned int nb);
int			ft_putchar(int c);
int			ft_putstr(char *str);
int			ft_putnbr(int n);
int			ft_puthex(unsigned int num, const char format);
int			ft_putptr(uintptr_t ptr);
int			ft_putunsigned(unsigned int nb);
int			ft_conversion(va_list vl, const char format);
int			ft_printf(const char *format, ...);
char		*ft_char(char *s, unsigned int number, int len);
char		*ft_uitoa(unsigned int nb);

#endif
