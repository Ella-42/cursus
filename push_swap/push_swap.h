/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:42:28 by lpeeters          #+#    #+#             */
/*   Updated: 2023/04/27 19:20:41 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/****************************************************/
/*                                                  */
/*                     INCLUDES                     */
/*                                                  */
/****************************************************/

/*libraries and header files*/

/*write*/
# include <unistd.h>

/*exit, malloc, free*/
# include <stdlib.h>

/*libft library*/
# include "libftprintf/libft.h"

/*ft_printf function*/
# include "libftprintf/ft_printf.h"

/****************************************************/
/*                                                  */
/*                     STRUCTURE                    */
/*                                                  */
/****************************************************/

/*linked list structure*/
typedef struct node
{
	int			val;
	int			i;
	struct node	*next;
}				t_node;

/****************************************************/
/*                                                  */
/*                    PUSH_SWAP                     */
/*                                                  */
/****************************************************/

/*             (./)             */

/********************************/
/*         push_swap.c          */
/********************************/

/*checks for errors, prints actions needed to sort input*/
int		main(int ac, char **av);

/****************************************************/
/*                                                  */
/*                   ERROR_CHECKS                   */
/*                                                  */
/****************************************************/

/*       (./error_checks/)      */

/********************************/
/*     master_error_check.c     */
/********************************/

/*check input for errors*/
int		ft_error_check(int ac, char **av);

/********************************/
/*          ft_isint.c          */
/********************************/

/*check if int is not greater or smaller than max/min size*/
int		ft_ismmint(char *str);

/*check if input is type of int*/
int		ft_isint(char *str);

/********************************/
/*          ft_isdup.c          */
/********************************/

/*depricated and replaced with ft_lldup in ft_linked_list*/

/*checks if number is negative
int	ft_isneg(char *s)

//compares two strings
int		ft_strcmp(char *s1, char *s2);

//checks for duplicates
int		ft_isdup(int ac, char **av);*/

/****************************************************/
/*                                                  */
/*                    ALGORITHM                     */
/*                                                  */
/****************************************************/

/*       (./algorithm/)      */

/********************************/
/*       ft_linked_list.c       */
/********************************/

/*converts input into a linked list*/
t_node	*ft_lla(int ac, char **av);

/*create empty linked list*/
t_node	*ft_llb(void);

/*free stack's memory*/
void	free_ll(t_node *stack);

/*checks linked list for duplicates*/
int		ft_lldup(t_node **stack);

/********************************/
/*          ll_utils.c          */
/********************************/

/*get stack length*/
int		ft_stack_len(t_node **stack);

/*get minimum value*/
int		ft_min_val(t_node **stack);

/*get maximum value*/
int		ft_max_val(t_node **stack);

/*check if stack is sorted*/
int		s_sorted(t_node **stack);

/*check if everything is sorted*/
int		ll_sorted(t_node **stack_a, t_node **stack_b);

/********************************/
/*       testing_grounds.c      */
/********************************/

/*print the list's values*/
void	print_list(t_node **stack);

/*print the lists' values*/
void	print_lists(t_node **stack_a, t_node **stack_b);

/*print the index of a list*/
void	print_index(t_node **stack);

/*testing*/
//int		ft_ll(int ac, char **av);
//int		main(int ac, char **av);

/********************************/
/*      master_algorithm.c      */
/********************************/

/*check which sorting algorithm to use*/
void	which_sort(t_node **stack_a, t_node **stack_b);

/*convert input to linked lists, then sort it*/
void	master_algorithm(int ac, char **av);

/********************************/
/*         hardcoded.c          */
/********************************/

/*algorithm for 2 numbers*/
void	algo2(t_node **stack_a);

/*algorithm for 3 numbers*/
void	algo3(t_node **stack_a);

/*algorithm for 4 numbers*/
void	algo4(t_node **stack_a);

/*algorithm for 5 numbers*/
void	algo5(t_node **stack_a);

/********************************/
/*         algorithm.c          */
/********************************/

/*compare moves to decide which rotate to use*/
void	smart_rotate(t_node **a, int x, int y, int len);

/*sort numbers into chunks*/
void	sort_chunk(t_node **a, t_node **b, int len, int x);

/*algorithm for any amount of numbers bigger than 5*/
void	algo(t_node **stack_a, t_node **stack_b, int len);

/********************************/
/*           index.c            */
/********************************/

/*find the next minimum value within a stack*/
int		next_min(t_node **stack, int prev);

/*search next minimum value and assign it's value*/
void	index_next(t_node **stack, int len);

/*copy the index of a stack over to another one*/
t_node	cpy_index(t_node **stack, t_node *current);

/*store indexed values into a stack*/
void	index_stack(t_node **stack_a, int len);

/****************************************************/
/*                                                  */
/*                    OPERATIONS                    */
/*                                                  */
/****************************************************/

/*       (./operations/)      */

/********************************/
/*             pp.c             */
/********************************/

/*pushes top item of stack b to top of stack a*/
void	pa(t_node **stack_a, t_node **stack_b);

/*pushes top item of stack a to top of stack b*/
void	pb(t_node **stack_b, t_node **stack_a);

/********************************/
/*             ss.c             */
/********************************/

/*swaps first two elements of stack a*/
void	sa(t_node **stack_a);

/*swaps first two elements of stack b*/
void	sb(t_node **stack_b);

/*swaps first two elements of both stack a and b*/
void	ss(t_node **stack_a, t_node **stack_b);

/*testing*/
//void	print_list(t_node *first_value)
//int		main(int ac, char **av)

/********************************/
/*             rr.c             */
/********************************/

/*rotates stack a up*/
void	ra(t_node **stack_a);

/*rotates stack b up*/
void	rb(t_node **stack_b);

/*rotates both stack a and b up*/
void	rr(t_node **stack_a, t_node **stack_b);

/********************************/
/*            rrr.c             */
/********************************/

/*rotates stack a down*/
void	rra(t_node **stack_a);

/*rotates stack b down*/
void	rrb(t_node **stack_b);

/*traverse to second to last node*/
void	to_second_to_last(t_node **last_node_a, t_node **last_node_b,
			t_node **second_to_last_node_a, t_node **second_to_last_node_b);

/*rotates both stack a and b down*/
void	rrr(t_node **stack_a, t_node **stack_b);

#endif
