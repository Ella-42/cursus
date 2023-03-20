/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 04:51:15 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/20 16:02:33 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*swaps first two elements of the list*/

void	sa(t_node **stack_a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp1 = *stack_a;
	tmp2 = (*stack_a)->next;
	tmp1->next = tmp2->next;
	*stack_a = tmp2;
	(*stack_a)->next = tmp1;
	write(1, "sa\n", 3);
}

void	sb(t_node **stack_b)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp1 = *stack_b;
	tmp2 = (*stack_b)->next;
	tmp1->next = tmp2->next;
	*stack_b = tmp2;
	(*stack_b)->next = tmp1;
	write(1, "sb\n", 3);
}

/*testing*/
/*
void	print_list(t_node *head)
{
	int		i;
	t_node	*current;

	i = 0;
	current = head;
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
