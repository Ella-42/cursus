/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:11:28 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/20 20:02:34 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/*
void	ra(t_node **stack_a)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp1 = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp1->next = NULL;
	tmp2 = *stack_a;
	while (tmp2->next != NULL)
		tmp2 = tmp2->next;
	tmp2 = tmp1;
	tmp3 = *stack_a;
	tmp3->next = tmp2;
	*stack_a = tmp3;
	write(1, "ra\n", 3);
}
*/
void	ra(t_node **stack_a)
{
	t_node	*tmp1;
	t_node	*tmp2;
//	t_node	*tmp3;

	if (*stack_a == NULL || (*stack_a)-> next == NULL)
		return ;
	tmp1 = (*stack_a)->next;
	tmp2 = *stack_a;
	tmp2->next = NULL;
	tmp1->next = tmp2;
	*stack_a = tmp1;
//	tmp3 = tmp1;
//	while (tmp3->next != NULL)
//		tmp3 = tmp3->next;
}
