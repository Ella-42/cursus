/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:15:02 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/31 22:27:56 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*check if int is not greater or smaller than max/min size*/

int	ft_ismmint(char *str)
{
	int			sign;
	int			i;
	long long	num;

	sign = 1;
	i = 0;
	num = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		if (num * sign < -2147483647 - 1 || num * sign > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

/*check if input is type of int*/

int	ft_isint(char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == '-')
	{
		if (str[++i] == '\0')
			return (0);
	}
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i++]))
			return (0);
		else if (ft_ismmint(str))
			return (0);
	}
	return (1);
}
