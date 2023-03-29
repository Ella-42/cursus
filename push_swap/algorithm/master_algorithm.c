/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:17:48 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/29 14:31:31 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*convert values to order*/

void	index_stack(t_node **stack)
{
	int		min_val;
	int		max_val;
	int		len;
	t_node	*current;

	min_val = (*stack)->val;
	max_val = (*stack)->val;
	len = 0;
	current = *stack;
	while (current != NULL)
	{
		if (current->val < min_val)
			min_val = current->val;
		else if (current->val > max_val)
			max_val = current->val;
		len++;
		current = current->next;
	}
	ft_printf("minimum value: %d\n", min_val);
	ft_printf("maximum value: %d\n", max_val);
	ft_printf("length: %d\n", len);
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
	print_list(&stack_b);
	index_stack(&stack_b);
	free_ll(stack_a);
}
