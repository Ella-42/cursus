/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:17:48 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/05 20:41:13 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*check which sorting algorithm to use*/

void	which_sort(t_node **stack_a)
{
	int		len;

	len = ft_stack_len(stack_a);
	if (len == 2)
		algo2(stack_a);
	else if (len == 3)
		algo3(stack_a);
	else if (len == 4)
		algo4(stack_a);
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
		exit (1);
	}
	stack_b = ft_llb();
	if (ll_sorted(&stack_a, &stack_b))
		free_ll(stack_a);
	else
	{
		which_sort(&stack_a);
		print_lists(&stack_a, &stack_b);
		free_ll(stack_a);
	}
}
