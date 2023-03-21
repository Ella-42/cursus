/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:11:28 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/21 11:05:27 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*rotates stack a up*/

void	ra(t_node **stack_a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp1 = *stack_a;
	tmp2 = tmp1;
	*stack_a = (*stack_a)->next;
	while (tmp1->next != NULL)
		tmp1 = tmp1->next;
	tmp1->next = (t_node *)malloc(sizeof(t_node));
	tmp1->next->val = tmp2->val;
	tmp1->next->next = NULL;
	write(1, "ra\n", 3);
}

/*rotates stack b up*/

void	rb(t_node **stack_b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp1 = *stack_b;
	tmp2 = tmp1;
	*stack_b = (*stack_b)->next;
	while (tmp1->next != NULL)
		tmp1 = tmp1->next;
	tmp1->next = (t_node *)malloc(sizeof(t_node));
	tmp1->next->val = tmp2->val;
	tmp1->next->next = NULL;
	write(1, "rb\n", 3);
}
