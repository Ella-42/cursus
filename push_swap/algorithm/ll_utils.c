/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:54:17 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/04 18:21:09 by lpeeters         ###   ########.fr       */
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
