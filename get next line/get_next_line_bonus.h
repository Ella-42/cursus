/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:02:15 by lpeeters          #+#    #+#             */
/*   Updated: 2023/01/31 19:21:04 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/* ********************************* */
/*               lines               */
/* ********************************* */

char	*get_next_line(int fd);
char	*ft_get_line(int fd, char *line);
char	*ft_get_next_line(char *line);
char	*new_line(char *line);

/* ********************************* */
/*               utils               */
/* ********************************* */

char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *line, char *buff);
size_t	ft_strlen(char *s);

#endif
