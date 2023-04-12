/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:25:49 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/12 21:16:16 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdbool.h>

/*algorithm for any amount of numbers bigger than 5*/

void	algo(t_node **stack_a)
{
	t_node	*stack_b;
//	t_node	*a;
//	int		len;
//	int		max;
	int		min;

	stack_b = ft_llb();
//	a = *stack_a;
//	len = ft_stack_len(&a);
//	max = ft_max_val(&a);
	while ((*stack_a)->next != NULL)
	{
		min = ft_min_val(stack_a);
		if ((*stack_a)->val != min)
			ra(stack_a);
		else
			pb(&stack_b, stack_a);
	}
	while (!ll_sorted(stack_a, &stack_b))
		pa(stack_a, &stack_b);
}
