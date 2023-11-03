/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:06:14 by lpeeters          #+#    #+#             */
/*   Updated: 2023/01/31 15:16:01 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*null_str;

	printf("ret: %i\n", ft_printf("test\n"));
	printf("ret: %i\n", printf("test\n"));
	null_str = NULL;
	printf("ret: %i\n", ft_printf("%s\n", null_str));
	printf("ret: %i\n", printf("%s\n", null_str));
	printf("ret: %i\n", ft_printf("%s\n", ""));
	printf("ret: %i\n", printf("%s\n", ""));
	printf("ret: %i\n", ft_printf("%i\n", 2147483647));
	printf("ret: %i\n", printf("%i\n", 2147483647));
	printf("ret: %i\n", ft_printf("%s", "test\n"));
	printf("ret: %i\n", printf("%s", "test\n"));
	printf("ret: %i\n", ft_printf("testing: %s", "test\n"));
	printf("ret: %i\n", printf("testing: %s", "test\n"));
	printf("ret: %i\n", ft_printf("%s, %i\n", "test", 907));
	printf("ret: %i\n", printf("%s, %i\n", "test", 907));
	printf("ret: %i\n", ft_printf("%p\n", NULL));
	printf("ret: %i\n", printf("%p\n", NULL));
	printf("ret: %i\n", ft_printf("%p\n", &null_str));
	printf("ret: %i\n", printf("%p\n", &null_str));
	printf("ret: %i\n", ft_printf("test: %c%c%c%c%c", 't', 'e', 's', 't', '\n'));
	printf("ret: %i\n", printf("test: %c%c%c%c%c", 't', 'e', 's', 't', '\n'));
}
