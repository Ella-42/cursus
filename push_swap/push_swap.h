/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:42:28 by lpeeters          #+#    #+#             */
/*   Updated: 2023/03/22 17:33:11 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/****************************************************/
/*                                                  */
/*                     INCLUDES                     */
/*                                                  */
/****************************************************/

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include "libftprintf/libft.h"
# include "libftprintf/ft_printf.h"

/****************************************************/
/*                                                  */
/*                     STRUCTURE                    */
/*                                                  */
/****************************************************/

typedef struct node
{
	int			val;
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

int		main(int ac, char **av);

/********************************/
/*       ft_linked_list.c       */
/********************************/

t_node	*ft_lla(int ac, char **av);
t_node	*ft_llb(void);

/********************************/
/*          ft_utils.c          */
/********************************/

int		ft_uatoi(char *str);

/****************************************************/
/*                                                  */
/*                   ERROR_CHECKS                   */
/*                                                  */
/****************************************************/

/*       (./error_checks/)      */

/********************************/
/*       ft_error_check.c       */
/********************************/

int		ft_error_check(int ac, char **av);

/********************************/
/*          ft_isint.c          */
/********************************/

int		ft_ismmint(char *str);
int		ft_isint(char *str);

/********************************/
/*          ft_isdup.c          */
/********************************/

int		ft_strcmp(char *s1, char *s2);
int		ft_isdup(int ac, char **av);

/****************************************************/
/*                                                  */
/*                    OPERATIONS                    */
/*                                                  */
/****************************************************/

/*       (./operations/)      */

/********************************/
/*             pp.c             */
/********************************/

void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_b, t_node **stack_a);

/********************************/
/*             ss.c             */
/********************************/

void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);

/********************************/
/*             rr.c             */
/********************************/

void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	to_last_node(t_node **last_node_a, t_node **last_node_b);
void	rr(t_node **stack_a, t_node **stack_b);

/********************************/
/*            rrr.c             */
/********************************/

void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	to_second_to_last(t_node **last_node_a, t_node **last_node_b,
			t_node **second_to_last_node_a, t_node **second_to_last_node_b);
void	rrr(t_node **stack_a, t_node **stack_b);

/****************************************************/
/*                                                  */
/*                    ALGORITHM                     */
/*                                                  */
/****************************************************/

/*       (./algorithm/)      */

/********************************/
/*           master.c           */
/********************************/

void	print_list(t_node **stack);
void	master_algorithm(int ac, char **av);

#endif
