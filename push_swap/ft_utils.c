/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:03:39 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/16 02:23:42 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_uatoi(char *str)
{
	int		n;
	int		s;
	int		i;

	n = 0;
	s = 1;
	i = 0;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * s);
}