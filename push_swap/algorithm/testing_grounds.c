/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing_grounds.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:51:38 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/26 15:00:56 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*print the list's values*/

void	print_list(t_node **stack)
{
	t_node	*current;

	current = *stack;
	ft_printf("Linked list values stack: ");
	while (current != NULL)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
	ft_printf("\n");
	ft_printf("Index stack: ");
	print_index(stack);
}

/*print the lists' values*/

void	print_lists(t_node **stack_a, t_node **stack_b)
{
	t_node	*current;

	current = *stack_a;
	ft_printf("Linked list values stack a: ");
	while (current != NULL)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
	ft_printf("\n");
	ft_printf("Index stack a: ");
	print_index(stack_a);
	current = *stack_b;
	ft_printf("Linked list values stack b: ");
	while (current != NULL)
	{
		ft_printf("%d ", current->val);
		current = current->next;
	}
	ft_printf("\n");
	ft_printf("Index stack b: ");
	print_index(stack_b);
}

/*print the index of a list*/

void	print_index(t_node **stack)
{
	t_node	*current;

	current = *stack;
	while (current != NULL)
	{
		ft_printf("%d ", current->i);
		current = current->next;
	}
	ft_printf("\n");
}

/*testing*/

/*int	ft_ll(int ac, char **av)
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
	pb(&stack_b, &stack_a);
	pb(&stack_b, &stack_a);
	pb(&stack_b, &stack_a);
	ra(&stack_a);
	rb(&stack_b);
//	rr(&stack_a, &stack_b);
	rra(&stack_a);
	rrb(&stack_b);
//	rrr(&stack_a, &stack_b);
	sa(&stack_a);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
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
}*/
