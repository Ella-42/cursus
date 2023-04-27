/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcoded.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:25:49 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/27 18:31:10 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*algorithm for 2 numbers*/

void	algo2(t_node **stack_a)
{
	sa(stack_a);
}

/*algorithm for 3 numbers*/

void	algo3(t_node **stack_a)
{
	t_node	*a;

	a = *stack_a;
	if (a->val > a->next->val && a->next->val > a->next->next->val)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a->val < a->next->val && a->val < a->next->next->val)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (a->val > a->next->val && a->val < a->next->next->val)
		sa(stack_a);
	else if (a->val < a->next->val && a->val > a->next->next->val)
		rra(stack_a);
	else if (a->val > a->next->val && a->val > a->next->next->val)
		ra(stack_a);
}

/*algorithm for 4 numbers*/

void	algo4(t_node **stack_a)
{
	t_node	*stack_b;
	t_node	*curr;
	int		min_val;

	stack_b = ft_llb();
	curr = *stack_a;
	min_val = ft_min_val(stack_a);
	if (curr->next->val == min_val)
		ra(stack_a);
	else if (curr->next->next->val == min_val)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (curr->next->next->next->val == min_val)
		rra(stack_a);
	pb(&stack_b, stack_a);
	if (!s_sorted(stack_a))
		algo3(stack_a);
	pa(stack_a, &stack_b);
}

/*algorithm for 5 numbers*/

void	algo5(t_node **stack_a)
{
	t_node	*stack_b;
	int		max_val;

	stack_b = ft_llb();
	max_val = ft_max_val(stack_a);
	if ((*stack_a)->next->val == max_val)
		ra(stack_a);
	else if ((*stack_a)->next->next->val == max_val)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->next->next->next->val == max_val)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->next->next->next->next->val == max_val)
		rra(stack_a);
	pb(&stack_b, stack_a);
	if (!s_sorted(stack_a))
		algo4(stack_a);
	pa(stack_a, &stack_b);
	ra(stack_a);
}
