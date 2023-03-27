/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:15:02 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/27 14:42:29 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*check if int is not greater or smaller than max/min size*/

int	ft_ismmint(char *str)
{
	int		sign;
	int		i;
	char	*num_str;
	long	num;

	num_str = &str[1];
	sign = 1;
	num = 0;
	i = 0;
	if (num_str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (num_str[i] != '\0')
	{
		num = num * 10 + (num_str[i] - '0');
		i++;
		if (num * sign > 2147483647 || num * sign < -2147483647 -1)
			return (1);
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
