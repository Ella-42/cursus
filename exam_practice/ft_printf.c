/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:12:14 by lpeeters          #+#    #+#             */
/*   Updated: 2023/05/25 21:33:56 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

#include <stdio.h>

int	cwrite(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_itoa(int i, int count)
{
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		count += 11;
		return (count);
	}
	if (i < 0)
	{
		count += cwrite('-');
		i = i * -1;
	}
	if (i > 9)
	{
		count = ft_itoa(i / 10, count);
		count += cwrite((i % 10) + 48);
	}
	else
		count += cwrite(i + 48);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	*str;
	va_list	vlist;
	int	num;
//	unsigned int	hex;

	i = 0;
	count = 0;
//	hex = 0;
	va_start(vlist, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			count += cwrite(format[i]);
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				str = va_arg(vlist, char *);
				if (!str)
				{
					write(1, "(null)", 6);
					return (6);
				}
				j = 0;
				while (str[j])
				{
					count += cwrite(str[j]);
					j++;
				}
			}
			else if (format[i] == 'd')
			{
				num = va_arg(vlist, int);
				count = ft_itoa(num, count);
			}
			else if (format[i] == 'x')
				/*hex = */va_arg(vlist, unsigned int);
		}
		i++;
	}
	va_end(vlist);
	return (count);
}

int	main(void)
{
//	char	*str;
	int	num = -2147483648;
//	str = ;
//	printf("test: %s", str);
	printf("\nreturn: %i\n", ft_printf("Magic %s is %d", "number", num));
	printf("\n=========================================================\n\n");
	printf("printf:\n");
	printf("\nreturn: %i\n", printf("Magic %s is %d", "number", num));
//	ft_printf("test: \n");
//	i += 48;
//	write(1, &i, 1);
}
