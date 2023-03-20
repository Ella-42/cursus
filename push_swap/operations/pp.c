/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:14:56 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/20 17:28:19 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*stack_b == NULL)
		return ;
	tmp1 = *stack_b;
	tmp2 = *stack_a;
	*stack_a = tmp1;
	*stack_b = tmp1->next;
	tmp1->next = tmp2;
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_b, t_node **stack_a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*stack_a == NULL)
		return ;
	tmp1 = *stack_a;
	tmp2 = *stack_b;
	*stack_b = tmp1;
	*stack_a = tmp1->next;
	tmp1->next = tmp2;
	write(1, "pb\n", 3);
}
