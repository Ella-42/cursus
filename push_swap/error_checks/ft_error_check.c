/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:11:10 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/27 14:43:08 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*check input for errors*/

int	ft_error_check(int ac, char **av)
{
	size_t	j;

	if (ac <= 1)
		return (1);
	j = 1;
	while (av[j] != NULL)
	{
		if (!ft_isint(av[j]))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		else if (ft_isdup(ac, av))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		j++;
	}
	return (0);
}
