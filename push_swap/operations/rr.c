/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:11:28 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/28 20:59:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*rotates stack a up*/

void	ra(t_node **stack_a)
{
	t_node	*first_node;
	t_node	*second_node;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first_node = *stack_a;
	second_node = (*stack_a)->next;
	*stack_a = (*stack_a)->next;
	while (second_node->next != NULL)
		second_node = second_node->next;
	second_node->next = first_node;
	first_node->next = NULL;
	write(1, "ra\n", 3);
}

/*rotates stack b up*/

void	rb(t_node **stack_b)
{
	t_node	*first_node;
	t_node	*second_node;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first_node = *stack_b;
	second_node = (*stack_b)->next;
	*stack_b = (*stack_b)->next;
	while (second_node->next != NULL)
		second_node = second_node->next;
	second_node->next = first_node;
	first_node->next = NULL;
	write(1, "rb\n", 3);
}

/*rotates both stack a and b up*/

void	rr(t_node **stack_a, t_node **stack_b)
{
	t_node	*first_node_a;
	t_node	*first_node_b;
	t_node	*second_node_a;
	t_node	*second_node_b;

	if ((*stack_a == NULL || (*stack_a)->next == NULL)
		|| (*stack_b == NULL || (*stack_b)->next == NULL))
		return ;
	first_node_a = *stack_a;
	first_node_b = *stack_b;
	second_node_a = (*stack_a)->next;
	second_node_b = (*stack_b)->next;
	*stack_a = (*stack_a)->next;
	*stack_b = (*stack_b)->next;
	while (second_node_a->next != NULL)
		second_node_a = second_node_a->next;
	while (second_node_b->next != NULL)
		second_node_b = second_node_b->next;
	second_node_a->next = first_node_a;
	second_node_b->next = first_node_b;
	first_node_a->next = NULL;
	first_node_b->next = NULL;
	write(1, "rb\n", 3);
}
