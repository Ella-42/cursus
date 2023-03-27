/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 04:51:15 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/27 20:37:55 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*swaps first two elements of stack a*/

void	sa(t_node **stack_a)
{
	t_node	*first_value;
	t_node	*second_value;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first_value = *stack_a;
	second_value = (*stack_a)->next;
	first_value->next = second_value->next;
	*stack_a = second_value;
	(*stack_a)->next = first_value;
	write(1, "sa\n", 3);
}

/*swaps first two elements of stack b*/

void	sb(t_node **stack_b)
{
	t_node	*first_value;
	t_node	*second_value;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first_value = *stack_b;
	second_value = (*stack_b)->next;
	first_value->next = second_value->next;
	*stack_b = second_value;
	(*stack_b)->next = first_value;
	write(1, "sb\n", 3);
}

/*swaps first two elements of both stack a and b*/

void	ss(t_node **stack_a, t_node **stack_b)
{
	t_node	*first_value_a;
	t_node	*first_value_b;
	t_node	*second_value_a;
	t_node	*second_value_b;

	if ((*stack_a == NULL || (*stack_a)->next == NULL)
		|| (*stack_b == NULL || (*stack_b)->next == NULL))
		return ;
	first_value_a = *stack_a;
	first_value_b = *stack_b;
	second_value_a = (*stack_a)->next;
	second_value_b = (*stack_b)->next;
	first_value_a->next = second_value_a->next;
	first_value_b->next = second_value_b->next;
	*stack_a = second_value_a;
	*stack_b = second_value_b;
	(*stack_a)->next = first_value_a;
	(*stack_b)->next = first_value_b;
	write(1, "ss\n", 3);
}

/*testing*/
/*
void	print_list(t_node *first_value)
{
	int		i;
	t_node	*current;

	i = 0;
	current = first_value;
	while (++i <= 2)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
}

int	main(int ac, char **av)
{
	t_node	*list;

	list = ft_create_linked_list(ac, av);
	sa(&list);
	print_list(list);
}*/
