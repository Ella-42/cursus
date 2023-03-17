/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:56:56 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/17 17:02:58 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
