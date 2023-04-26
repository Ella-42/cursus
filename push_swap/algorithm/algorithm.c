/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:25:49 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/26 19:31:32 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*smort*/

void	smort(t_node **a, int len)
{
	t_node	*c;
	int		n;

	c = *a;
	n = 0;
	(void)len;
	while (c != NULL)
	{
		ft_printf("%d\n", c->i);
		if (c->i < 20)
			break ;
		else
			n++;
		c = c->next;
	}
	ft_printf("n: %d\n", n);
	if (n < 51)
		while (n-- > 0)
			ra(a);
	else
	{
		n = 100 - n;
		while (n-- > 0)
			rra(a);
	}
}

/*algorithm untill 100 numbers*/

void	algo100(t_node **a, t_node **b, int len)
{
	while (len > 80)
	{
		if ((*a)->i < 20)
			pb(b, a);
		else
			smort(a, len);
		len = ft_stack_len(a);
	}
	while (len > 60)
	{
		if ((*a)->i < 40)
			pb(b, a);
		else
			smort(a, len);
		len = ft_stack_len(a);
	}
	while (len > 40)
	{
		if ((*a)->i < 60)
			pb(b, a);
		else
			smort(a, len);
		len = ft_stack_len(a);
	}
	while (len > 20)
	{
		if ((*a)->i < 80)
			pb(b, a);
		else
			smort(a, len);
		len = ft_stack_len(a);
	}
	while (len > 0)
	{
		if ((*a)->i < 100)
			pb(b, a);
		else
			smort(a, len);
		len = ft_stack_len(a);
	}
}

/*algorithm untill 500 numbers*/

void	algo500(t_node **a, t_node **b, int len)
{
	(void)len;
	if ((*a)->i < 250)
		pb(b, a);
	else
		smort(a, len);
}

/*algorithm for any amount of numbers bigger than 5*/

void	algo(t_node **stack_a, t_node **stack_b, int len)
{
	index_stack(stack_a, len);
	if (len < 101)
		algo100(stack_a, stack_b, len);
	else
		algo500(stack_a, stack_b, len);
}
