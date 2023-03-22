/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:17:48 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/22 15:19:38 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_node **stack)
{
	t_node	*current;

	current = *stack;
	ft_printf("Linked list values: ");
	while (current != NULL)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
	ft_printf("\n");
}

void	master_algorithm(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = ft_lla(ac, av);
	if (stack_a == NULL)
		return ;
	stack_b = ft_llb();
	print_list(&stack_a);
	print_list(&stack_b);
}
