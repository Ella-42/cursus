/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:50:25 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/27 20:41:10 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*rotates stack a down*/

void	rra(t_node **stack_a)
{
	t_node	*last_node;
	t_node	*second_to_last_node;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last_node = *stack_a;
	second_to_last_node = NULL;
	while (last_node->next != NULL)
	{
		second_to_last_node = last_node;
		last_node = last_node->next;
	}
	second_to_last_node->next = NULL;
	last_node->next = *stack_a;
	*stack_a = last_node;
	write(1, "rra\n", 4);
}

/*rotates stack b down*/

void	rrb(t_node **stack_b)
{
	t_node	*last_node;
	t_node	*second_to_last_node;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last_node = *stack_b;
	second_to_last_node = NULL;
	while (last_node->next != NULL)
	{
		second_to_last_node = last_node;
		last_node = last_node->next;
	}
	second_to_last_node->next = NULL;
	last_node->next = *stack_b;
	*stack_b = last_node;
	write(1, "rrb\n", 4);
}

/*traverse to second to last node*/

void	to_second_to_last(t_node **last_node_a, t_node **last_node_b,
		t_node **second_to_last_node_a, t_node **second_to_last_node_b)
{
	while ((*last_node_a)->next != NULL || (*last_node_b)->next != NULL)
	{
		*second_to_last_node_a = *last_node_a;
		*second_to_last_node_b = *last_node_b;
		*last_node_a = (*last_node_a)->next;
		*last_node_b = (*last_node_b)->next;
	}
}

/*rotates both stack a and b down*/

void	rrr(t_node **stack_a, t_node **stack_b)
{
	t_node	*last_node_a;
	t_node	*last_node_b;
	t_node	*second_to_last_node_a;
	t_node	*second_to_last_node_b;

	if ((*stack_a == NULL || (*stack_a)->next == NULL)
		|| (*stack_b == NULL || (*stack_b)->next == NULL))
		return ;
	last_node_a = *stack_a;
	last_node_b = *stack_b;
	second_to_last_node_a = NULL;
	second_to_last_node_b = NULL;
	to_second_to_last(&last_node_a, &last_node_b,
		&second_to_last_node_a, &second_to_last_node_b);
	second_to_last_node_a->next = NULL;
	second_to_last_node_b->next = NULL;
	last_node_a->next = *stack_a;
	last_node_b->next = *stack_b;
	*stack_a = last_node_a;
	*stack_b = last_node_b;
	write(1, "rrr\n", 4);
}
