/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:25:49 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/04 20:13:27 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*algorithm for 2 numbers*/

void	algo2(t_node *stack_a)
{
	sa(&stack_a);
	free_ll(stack_a);
}

/*algorithm for 3 numbers*/

void	algo3(t_node *stack_a)
{
	t_node	*a;

	a = stack_a;
	if (a->val > a->next->val && a->next->val > a->next->next->val)
	{
		sa(&stack_a);
		rra(&stack_a);
	}
	else if (a->val < a->next->val && a->val < a->next->next->val)
	{
		sa(&stack_a);
		ra(&stack_a);
	}
	else if (a->val > a->next->val && a->val < a->next->next->val)
		sa(&stack_a);
	else if (a->val < a->next->val && a->val > a->next->next->val)
		rra(&stack_a);
	else if (a->val > a->next->val && a->val > a->next->next->val)
		ra(&stack_a);
	free_ll(stack_a);
}
