/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:27:51 by lpeeters          #+#    #+#             */
/*   Updated: 2023/06/05 19:31:20 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac < 4)
	{
		printf("Calculate what? You failed to give enough arguments!\n");
		return (1);
	}
	else if (ac > 4)
	{
		printf("Sorry, the option to calculate with this many arguments is currently not yet implemented.\nIf you bother Ella enough with this, she might actually do it.\n");
		return (1);
	}
	else
	{
		float n1 = atoi(av[1]);
		float n2 = atoi(av[3]);
		char s = av[2][0];
		float r = 0.0;
		if (s == '+')
			r = n1 + n2;
		else if (s == '-')
			r = n1 - n2;
		else if (s == 'x' || s == '*')
			r = n1 * n2;
		else if (s == '%')
		{
			if (n2 == 0)
			{
				printf("Really? Modulo zero? You must be the brightest of students...\n");
				return (1);
			}
			r = (int)n1 % (int)n2;
		}
		else if (s == '/')
		{
			if (n2 == 0)
			{
				printf("Really? Divided by zero? You must be the brightest of students...\n");
				return (1);
			}
			r = n1 / n2;
		}
		else
		{
			printf("You're joking... right?\n");
			return (1);
		}
		printf("Result: %g\n", r);
	}
	return (0);
}
