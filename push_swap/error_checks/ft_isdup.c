/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:39:37 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/27 15:56:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*checks if number is negative*/

int	ft_isneg(char *s)
{
	return (s[0] == '-');
}

/*compares two strings*/

int	ft_strcmp(char *s1, char *s2)
{
	size_t	start_1;
	size_t	start_2;

	if (ft_isneg(s1) != ft_isneg(s2))
		return (1);
	start_1 = 0;
	while ((s1[start_1] == '-' && start_1 < ft_strlen(s1))
		|| s1[start_1] == '0')
		start_1++;
	start_2 = 0;
	while ((s2[start_2] == '-' && start_2 < ft_strlen(s2))
		|| s2[start_2] == '0')
		start_2++;
	while (s1[start_1] || s2[start_2])
	{
		if (s1[start_1] != s2[start_2])
			return (1);
		start_1++;
		start_2++;
	}
	return (0);
}

/*checks for duplicates*/

int	ft_isdup(int ac, char **av)
{
	size_t	l;
	size_t	k;
	size_t	j;

	l = ac;
	k = 1;
	while (k < l)
	{
		j = k + 1;
		while (j < l)
		{
			if (!ft_strcmp(av[k], av[j]))
				return (1);
			j++;
		}
		k++;
	}
	return (0);
}
