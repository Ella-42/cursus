/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:25:01 by lpeeters          #+#    #+#             */
/*   Updated: 2023/05/02 17:27:11 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*find the position of the maximum value*/

int	max_num_pos(t_node **stack_b, int max_val)
{
	t_node	*current;
	int		pos;

	current = *stack_b;
	pos = 0;
	while (current != NULL)
	{
		if (current->val == max_val)
			break ;
		else
			pos++;
		current = current->next;
	}
	return (pos);
}

/*compare moves to decide which rotate to use*/

void	smart_rotate_b(t_node **stack_b, t_node **stack_a, int max_val)
{
	int	len;
	int	number;
	int	rev_num;

	len = ft_stack_len(stack_b);
	number = max_num_pos(stack_b, max_val);
	rev_num = len - number;
	if (rev_num < number)
	{
		while (rev_num-- > 0)
			rrb(stack_b);
	}
	else
		while (number-- > 0)
			rb(stack_b);
	pa(stack_a, stack_b);
}

/*push maximum value from stack b to top of stack a untill it is empty*/

void	sort(t_node **stack_b, t_node **stack_a)
{
	int		max_val;

	while (*stack_b != NULL)
	{
		max_val = ft_max_val(stack_b);
		smart_rotate_b(stack_b, stack_a, max_val);
	}
}
