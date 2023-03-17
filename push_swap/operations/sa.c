/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 04:51:15 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/17 17:16:15 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*swaps first two elements of the list*/

void	sa(t_node **head)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tmp1 = *head;
	tmp2 = (*head)->next;
	tmp1->next = tmp2->next;
	*head = tmp2;
	(*head)->next = tmp1;
	write(1, "sa\n", 3);
}

void	sb(t_node **head)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tmp1 = *head;
	tmp2 = (*head)->next;
	tmp1->next = tmp2->next;
	*head = tmp2;
	(*head)->next = tmp1;
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
