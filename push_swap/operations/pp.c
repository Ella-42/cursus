/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:14:56 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/28 21:07:53 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*pushes top item of stack b to top of stack a*/

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

/*pushes top item of stack a to top of stack b*/

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
