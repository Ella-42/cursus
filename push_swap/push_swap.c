/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:11:10 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/28 13:28:52 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*checks for errors, prints actions needed to sort input*/

int	main(int ac, char **av)
{
	if (ft_error_check(ac, av))
		exit (1);
	master_algorithm(ac, av);
}
