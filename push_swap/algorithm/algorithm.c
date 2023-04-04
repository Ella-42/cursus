/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:25:49 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/04 18:24:20 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*algorithm for 2 numbers*/

void	algo2(t_node *stack_a)
{
	ra(&stack_a);
}

/*algorithm for 3 numbers*/

void	algo3(t_node *stack_a)
{
	int		min_val;
	int		max_val;

	min_val = ft_min_val(&stack_a);
	max_val = ft_max_val(&stack_a);
	ft_printf("min_val:%d max_val:%d\n", min_val, max_val);
}
