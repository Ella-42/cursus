/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:13 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/20 19:46:43 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*converts input into a linked list*/

t_node	*ft_lla(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*current;
	t_node	*new_node;
	int		i;

	i = 0;
	stack_a = NULL;
	current = NULL;
	while (++i < ac)
	{
		new_node = (t_node *)malloc(sizeof(t_node));
		new_node->val = ft_atoi(av[i]);
		new_node->next = NULL;
		if (stack_a == NULL)
		{
			stack_a = new_node;
			current = stack_a;
		}
		else
		{
			current->next = new_node;
			current = new_node;
		}
	}
	return (stack_a);
}

t_node	*ft_llb(void)
{
	t_node	*stack_b;

	stack_b = NULL;
	return (stack_b);
}

/*testing*/

int	ft_ll(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*current1;
	t_node	*current2;

	stack_a = ft_lla(ac, av);
	stack_b = ft_llb();
	if (stack_a == NULL)
		return (1);
	sa(&stack_a);
//	sb(&stack_a);
	pb(&stack_b, &stack_a);
	pb(&stack_b, &stack_a);
	pb(&stack_b, &stack_a);
	ra(&stack_a);
//	pa(&stack_a, &stack_b);
//	pa(&stack_a, &stack_b);
	current1 = stack_a;
	write(1, "Linked list values stack_a: ", 28);
	while (current1 != NULL)
	{
		ft_printf("%d ", current1->val);
		current1 = current1->next;
	}
	write(1, "\n", 1);
	current2 = stack_b;
	write(1, "Linked list values stack_b: ", 28);
	while (current2 != NULL)
	{
		ft_printf("%d ", current2->val);
		current2 = current2->next;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int ac, char **av)
{
	ft_ll(ac, av);
}
