/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:51:35 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/26 15:02:59 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*find the next minimum value within a stack*/

int	next_min(t_node **stack, int prev)
{
	t_node	*current;
	int		next_val;

	current = *stack;
	next_val = ft_max_val(stack);
	while (current != NULL)
	{
		if (current->val > prev && current->val < next_val)
			next_val = current->val;
		current = current->next;
	}
	return (next_val);
}

/*search next minimum value and assign it's value*/

void	index_next(t_node **stack, int len)
{
	t_node	*current;
	int		min_val;
	int		index;
	int		prev_val;

	current = *stack;
	min_val = ft_min_val(stack);
	index = 1;
	while (--len > 0)
	{
		current = *stack;
		prev_val = min_val;
		min_val = next_min(stack, prev_val);
		while (current != NULL)
		{
			if (current->val == min_val)
				current->i = index++;
			current = current->next;
		}
	}
}

/*copy the index of a stack over to another one*/

t_node	cpy_index(t_node **stack, t_node *current)
{
	while (current != NULL)
	{
		(*stack)->i = current->i;
		current = current->next;
		*stack = (*stack)->next;
	}
	return (**stack);
}

/*store indexed values into a stack*/

void	index_stack(t_node **stack, int len)
{
	t_node	*current;
	int		min_val;
	int		index;

	current = *stack;
	min_val = ft_min_val(stack);
	index = 0;
	while (current != NULL)
	{
		if (current->val == min_val)
			current->i = index++;
		current = current->next;
	}
	index_next(stack, len);
	cpy_index(stack, current);
}
