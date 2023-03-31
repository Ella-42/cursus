/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:17:48 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/31 23:18:52 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*convert values to order*/

void	index_stack(t_node **stack)
{
	int		val;
	int		min_val;
	t_node	*index;

	val = 0;
	min_val = (*stack)->val;
	index = *stack;
	while (index != NULL)
	{
		if (index->val < min_val)
			min_val = index->val;
		index = index->next;
	}
	index = *stack;
	while (index != NULL)
	{
		if (index->val == min_val)
		{
			index->val = val;
			val++;
		}
		index = index->next;
	}
}

/*check if list is sorted*/

int	is_sorted(t_node **stack_a, t_node **stack_b)
{
	t_node	*stack;

	stack = *stack_a;
	if (!(stack_b == NULL))
		return (1);
	free_ll(stack);
	exit (0);
}

/*convert input to linked lists, then sort it*/

void	master_algorithm(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = ft_lla(ac, av);
	if (stack_a == NULL || ft_lldup(&stack_a))
	{
		ft_printf("Error\n");
		free_ll(stack_a);
		return ;
	}
	stack_b = ft_llb();
	print_list(&stack_a);
	index_stack(&stack_a);
	print_list(&stack_a);
	free_ll(stack_a);
	free_ll(stack_b);
}
