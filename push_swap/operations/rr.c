/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:11:28 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/21 23:19:06 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*rotates stack a up*/

void	ra(t_node **stack_a)
{
	t_node	*last_node;
	t_node	*first_value;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last_node = *stack_a;
	first_value = last_node;
	*stack_a = (*stack_a)->next;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = (t_node *)malloc(sizeof(t_node));
	last_node->next->val = first_value->val;
	last_node->next->next = NULL;
	write(1, "ra\n", 3);
}

/*rotates stack b up*/

void	rb(t_node **stack_b)
{
	t_node	*last_node;
	t_node	*first_value;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last_node = *stack_b;
	first_value = last_node;
	*stack_b = (*stack_b)->next;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = (t_node *)malloc(sizeof(t_node));
	last_node->next->val = first_value->val;
	last_node->next->next = NULL;
	write(1, "rb\n", 3);
}

/*traverses to last node*/

void	to_last_node(t_node **last_node_a, t_node **last_node_b)
{
	while ((*last_node_a)->next != NULL || (*last_node_b)->next != NULL)
	{
		*last_node_a = (*last_node_a)->next;
		*last_node_b = (*last_node_b)->next;
	}
}

/*rotates both stack a and b up*/

void	rr(t_node **stack_a, t_node **stack_b)
{
	t_node	*last_node_a;
	t_node	*last_node_b;
	t_node	*first_value_a;
	t_node	*first_value_b;

	if ((*stack_a == NULL || (*stack_a)->next == NULL)
		|| (*stack_b == NULL || (*stack_b)->next == NULL))
		return ;
	last_node_a = *stack_a;
	last_node_b = *stack_b;
	first_value_a = last_node_a;
	first_value_b = last_node_b;
	*stack_a = (*stack_a)->next;
	*stack_b = (*stack_b)->next;
	to_last_node(&last_node_a, &last_node_b);
	last_node_a->next = (t_node *)malloc(sizeof(t_node));
	last_node_b->next = (t_node *)malloc(sizeof(t_node));
	last_node_a->next->val = first_value_a->val;
	last_node_b->next->val = first_value_b->val;
	last_node_a->next->next = NULL;
	last_node_b->next->next = NULL;
	write(1, "rr\n", 3);
}
