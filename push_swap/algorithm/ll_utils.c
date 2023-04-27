/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:54:17 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/27 18:14:45 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*get stack length*/

int	ft_stack_len(t_node **stack)
{
	int		len;
	t_node	*current;

	len = 0;
	current = *stack;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}

/*get minimum value*/

int	ft_min_val(t_node **stack)
{
	int		min_val;
	t_node	*current;

	min_val = (*stack)->val;
	current = *stack;
	while (current != NULL)
	{
		if (current->val < min_val)
			min_val = current->val;
		current = current->next;
	}
	return (min_val);
}

/*get maximum value*/

int	ft_max_val(t_node **stack)
{
	int		max_val;
	t_node	*current;

	max_val = (*stack)->val;
	current = *stack;
	while (current != NULL)
	{
		if (current->val > max_val)
			max_val = current->val;
		current = current->next;
	}
	return (max_val);
}

/*check if stack is sorted*/

int	s_sorted(t_node **stack)
{
	t_node	*s;
	int		prev_val;
	int		next_val;

	s = *stack;
	while (s->next != NULL)
	{
		next_val = s->next->val;
		prev_val = s->val;
		if (next_val < prev_val)
			return (0);
		s = s->next;
	}
	return (1);
}

/*check if everything is sorted*/

int	ll_sorted(t_node **stack_a, t_node **stack_b)
{
	t_node	*stack;
	int		prev_val;
	int		next_val;

	if ((*stack_b != NULL))
		return (0);
	stack = *stack_a;
	while (stack->next != NULL)
	{
		next_val = stack->next->val;
		prev_val = stack->val;
		if (next_val < prev_val)
			return (0);
		stack = stack->next;
	}
	return (1);
}
