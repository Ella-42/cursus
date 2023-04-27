/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:25:49 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/27 19:20:33 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*compare moves to decide which rotate to use*/

void	smart_rotate(t_node **a, int x, int y, int len)
{
	t_node	*c;
	int		n;
	int		test;

	c = *a;
	n = 0;
	while (c != NULL)
	{
		if (c->i < y - x)
			break ;
		else
			n++;
		c = c->next;
	}
	ft_printf("n: %d\n", n);
	test = (len / 2) + 1;
	ft_printf("test: %d\n", test);
	if (n < (len / 2) + 1)
		while (n-- > 0)
			ra(a);
	else
	{
		n = y - n - 1;
		while (n-- > 0)
			rra(a);
	}
}

/*sort numbers into chunks*/

void	sort_chunk(t_node **a, t_node **b, int len, int x)
{
	int	y;

	y = len;
	while (len > x)
	{
		if ((*a)->i < y - x)
			pb(b, a);
		else
			smart_rotate(a, x, y, len);
		len = ft_stack_len(a);
	}
}

/*algorithm for any amount of numbers bigger than 5*/

void	algo(t_node **a, t_node **b, int len)
{
	int	x;
	int	z;

	index_stack(a, len);
	if (len < 101)
		z = 5;
	else
		z = 10;
	x = len - (len / z);
	while (x >= 0)
	{
		sort_chunk(a, b, len, x);
		x -= len / z;
	}
}
