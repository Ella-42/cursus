/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:25:49 by lpeeters          #+#    #+#             */
/*   Updated: 2023/05/02 17:27:13 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*find the position of the last number of interest*/

int	rev_num_pos(t_node **stack_a, int size, int og_len, int len)
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
		else if (current->index < og_len - size)
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

/*find the position of the first number of interest*/

int	num_pos(t_node **stack_a, int size, int og_len)
{
	t_node	*current;
	int		number;

	current = *stack_a;
	number = 0;
	while (current != NULL)
	{
		if (current->index < og_len - size)
			break ;
		else
			number++;
		current = current->next;
	}
	return (number);
}

/*compare moves to decide which rotate to use*/

void	smart_rotate_a(t_node **stack_a, t_node **stack_b, int size, int og_len)
{
	int	len;
	int	number;
	int	rev_num;

	len = ft_stack_len(stack_a);
	number = num_pos(stack_a, size, og_len);
	rev_num = rev_num_pos(stack_a, size, og_len, len);
	rev_num = len - rev_num + 1;
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
		smart_rotate_a(stack_a, stack_b, size, og_len);
		len = ft_stack_len(stack_a);
	}
}

/*algorithm for any amount of numbers bigger than 5*/

void	algo(t_node **stack_a, t_node **stack_b, int len)
{
	int	size;
	int	div;

	index_stack(stack_a, len);
	if (len < 101)
		div = 4;
	else
		div = 13;
	size = len - (len / div);
	while (size >= 0)
	{
		sort_chunk(stack_a, stack_b, len, size);
		size -= len / div;
	}
	while (*stack_a != NULL)
		pb(stack_b, stack_a);
	sort(stack_b, stack_a);
}
