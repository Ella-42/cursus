/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:17:48 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/24 22:00:32 by lpeeters         ###   ########.fr       */
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
	(void)*stack_a;
	if (!(*stack_b == NULL))
		return (1);
	return (0);
}

/*convert input to linked lists, then sort it*/

void	master_algorithm(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = ft_lla(ac, av);
	if (stack_a == NULL)
		return ;
	stack_b = ft_llb();
	if (is_sorted(&stack_a, &stack_b))
		return ;
	print_list(&stack_a);
	index_stack(&stack_a);
	print_list(&stack_b);
}
