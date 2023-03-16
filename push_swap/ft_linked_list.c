/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:13 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/16 22:36:43 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct node
{
	int			val;
	struct node	*next;
}				t_node;

t_node	*ft_create_linked_list(int ac, char **av)
{
	t_node	*head;
	t_node	*current;
	t_node	*new_node;
	int		i;

	i = 0;
	head = NULL;
	current = NULL;
	while (++i < ac)
	{
		new_node = (t_node *)malloc(sizeof(t_node));
		new_node->val = ft_atoi(av[i]);
		new_node->next = NULL;
		if (head == NULL)
		{
			head = new_node;
			current = head;
		}
		else
		{
			current->next = new_node;
			current = new_node;
		}
	}
	return (head);
}

int	ft_linked_list(int ac, char **av)
{
	t_node	*head;
	t_node	*current;

	head = ft_create_linked_list(ac, av);
	if (head == NULL)
		return (1);
	write(1, "Linked list values: ", 20);
	current = head;
	while (current != NULL)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
	write(1, "\n", 1);
	return (0);
}