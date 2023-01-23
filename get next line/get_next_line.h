/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:43:07 by lpeeters          #+#    #+#             */
/*   Updated: 2023/01/23 20:31:20 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

char	*get_next_line(int fd);
char	*ft_get_line(int fd, char *line);
char	*ft_get_next_line(char *line);
char	*new_line(char *line);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *line, char *buff);

size_t	ft_strlen(char *s);

#endif
