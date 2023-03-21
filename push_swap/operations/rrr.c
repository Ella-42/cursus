/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:50:25 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/21 11:03:04 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*rotates stack a down*/

void	rra(t_node **stack_a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp1 = *stack_a;
	tmp2 = NULL;
	while (tmp1->next != NULL)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	tmp2->next = NULL;
	tmp1->next = *stack_a;
	*stack_a = tmp1;
	write(1, "rra\n", 4);
}

/*rotates stack b down*/

void	rrb(t_node **stack_b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp1 = *stack_b;
	tmp2 = NULL;
	while (tmp1->next != NULL)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	tmp2->next = NULL;
	tmp1->next = *stack_b;
	*stack_b = tmp1;
	write(1, "rrb\n", 4);
}
