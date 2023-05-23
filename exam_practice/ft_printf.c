/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:12:14 by lpeeters          #+#    #+#             */
/*   Updated: 2023/05/23 21:03:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

#include <stdio.h>

va_list	g_test;

int	ft_printf(const char *format, ...)
{
	size_t	i;
//	size_t	j;
	char	*str;

	i = 0;
	va_start(g_test, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		if (format[i] == '%')
		{
			i += 2;
			if (i == 's')
			{
				str = va_arg(g_test, char *);
				printf("%s", str);
/*				j = 0;
				while (str[j])
				{
//					write(1, "testing", 7);
//					write(1, &str[j], 1);
					j++;
				}
*/			}
			else if (i == 'd')
				va_arg(g_test, int);
			else if (i == 'x')
				va_arg(g_test, int);
		}
		i++;
	}
	va_end(g_test);
	return (0);
}

int	main(void)
{
	char	*str;

	str = "string";
//	printf("test: %s", str);
	ft_printf("test: %s", str);
//	ft_printf("test: \n");
}
