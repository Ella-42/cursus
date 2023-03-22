/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:45:11 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/22 15:41:36 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_empty(const char *str)
{
	if (str[0] == '\0')
	{
		write(1, "Error\n", 6);
		exit (1);
	}
}

int	ft_atoi(const char *str)
{
	int					i;
	int					s;
	unsigned long int	r;

	i = 0;
	s = 1;
	r = 0;
	check_empty(str);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	return (r * s);
}
