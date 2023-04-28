/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:25:49 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/28 21:37:15 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**/

int	tmp2(t_node **stack_a, int size, int og_len, int len)
{
	t_node	*current;
	int		rev_num;
	int		count;

	current = *stack_a;
	rev_num = 0;
	count = 0;
	while (current != NULL)
	{
		if (count == len - size)
			break ;
		else if (current->i < og_len - size)
		{
			count++;
			rev_num++;
		}
		else
			rev_num++;
		current = current->next;
	}
	return (rev_num);
}

/**/

int	tmp(t_node **stack_a, int size, int og_len)
{
	t_node	*current;
	int		number;

	current = *stack_a;
	number = 0;
	while (current != NULL)
	{
		if (current->i < og_len - size)
			break ;
		else
			number++;
		current = current->next;
	}
	return (number);
}

/*compare moves to decide which rotate to use*/

void	smart_rotate(t_node **stack_a, t_node **stack_b, int size, int og_len)
{
	int	len;
	int	number;
	int	rev_num;

	len = ft_stack_len(stack_a);
	number = tmp(stack_a, size, og_len);
	rev_num = tmp2(stack_a, size, og_len, len);
//	print_index(stack_a);
//	ft_printf("number: %d\n", number);
	rev_num = len - rev_num + 1;
//	ft_printf("rev_num: %d\n", rev_num);
	if (rev_num < number)
	{
		while (rev_num-- > 0)
			rra(stack_a);
	}
	else
		while (number-- > 0)
			ra(stack_a);
	pb(stack_b, stack_a);
}

/*sort numbers into chunks*/

void	sort_chunk(t_node **stack_a, t_node **stack_b, int len, int size)
{
	int	og_len;

	og_len = len;
	while (len > size)
	{
		smart_rotate(stack_a, stack_b, size, og_len);
		len = ft_stack_len(stack_a);
	}
}

/*algorithm for any amount of numbers bigger than 5*/

void	algo(t_node **stack_a, t_node **stack_b, int len)
{
	int	size;
	int	z;

	index_stack(stack_a, len);
	if (len < 101)
		z = 5;
	else
		z = 10;
	size = len - (len / z);
	while (size >= 0)
	{
		sort_chunk(stack_a, stack_b, len, size);
		size -= len / z;
	}
}
