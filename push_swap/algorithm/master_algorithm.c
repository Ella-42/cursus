/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:17:48 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/04 18:24:21 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*check if list is sorted*/

int	is_sorted(t_node **stack_a, t_node **stack_b)
{
	t_node	*stack;
	int		prev_val;
	int		next_val;

	if (!(*stack_b == NULL))
		return (0);
	stack = *stack_a;
	while (stack->next != NULL)
	{
		next_val = stack->next->val;
		prev_val = stack->val;
		if (next_val < prev_val)
			return (0);
		stack = stack->next;
	}
	return (1);
}

/*check which sorting algorithm to use*/

void	which_sort(t_node **stack_a)
{
	t_node	*stack;
	int		len;

	stack = *stack_a;
	len = ft_stack_len(stack_a);
	if (len == 2)
		algo2(stack);
	else if (len == 3)
		algo3(stack);
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
	if (is_sorted(&stack_a, &stack_b))
		free_ll(stack_a);
	else
		which_sort(&stack_a);
}
