/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:13 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/27 18:18:52 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

/*create empty linked list*/

t_node	*ft_llb(void)
{
	t_node	*stack_b;

	stack_b = NULL;
	return (stack_b);
}

/*free stack's memory*/

void	free_ll(t_node *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack;
	while (current != NULL)
	{
		next = current->next;
		free (current);
		current = next;
	}
}

/*checks linked list for duplicates*/

int	ft_lldup(t_node **stack)
{
	t_node	*current;
	t_node	*compare;

	current = *stack;
	while (current != NULL)
	{
		compare = current->next;
		while (compare != NULL)
		{
			if (current->val == compare->val)
				return (1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}
