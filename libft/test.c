/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:04:04 by lpeeters          #+#    #+#             */
/*   Updated: 2023/01/16 11:34:53 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <strings.h>
#include <stdio.h>

int	main(void)
{
	const char	*haystack;
	const char	*needle;
	char		*ptr;

	haystack = "Foo Bar Baz";
	needle = "Bar";
	ptr = strnstr(haystack, needle, 4);
	printf(ptr);
}
