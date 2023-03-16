# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 13:58:55 by lpeeters          #+#    #+#              #
#    Updated: 2023/03/16 03:49:17 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = error_checks/ft_error_check.c error_checks/ft_isdup.c \
       error_checks/ft_isint.c ft_utils.c push_swap.c ft_linked_list.c

PSRCS = libftprintf/ft_isalpha.c libftprintf/ft_isdigit.c \
       libftprintf/ft_isalnum.c libftprintf/ft_isascii.c \
       libftprintf/ft_isprint.c libftprintf/ft_strlen.c \
       libftprintf/ft_memset.c libftprintf/ft_bzero.c \
       libftprintf/ft_memcpy.c libftprintf/ft_memmove.c \
       libftprintf/ft_strlcpy.c libftprintf/ft_strlcat.c \
       libftprintf/ft_calloc.c libftprintf/ft_strdup.c \
       libftprintf/ft_toupper.c libftprintf/ft_tolower.c \
       libftprintf/ft_strchr.c libftprintf/ft_strncmp.c \
       libftprintf/ft_memchr.c libftprintf/ft_memcmp.c \
       libftprintf/ft_strnstr.c libftprintf/ft_atoi.c \
       libftprintf/ft_strrchr.c libftprintf/ft_substr.c \
       libftprintf/ft_strjoin.c libftprintf/ft_strtrim.c \
       libftprintf/ft_split.c libftprintf/ft_itoa.c \
       libftprintf/ft_strmapi.c libftprintf/ft_striteri.c \
       libftprintf/ft_putchar_fd.c libftprintf/ft_lstnew.c \
       libftprintf/ft_lstadd_front.c libftprintf/ft_lstsize.c \
       libftprintf/ft_lstlast.c libftprintf/ft_lstadd_back.c \
       libftprintf/ft_lstdelone.c libftprintf/ft_lstclear.c \
       libftprintf/ft_lstiter.c libftprintf/ft_lstmap.c \
       libftprintf/ft_putstr_fd.c libftprintf/ft_putendl_fd.c \
       libftprintf/ft_putnbr_fd.c libftprintf/ft_printf.c \
       libftprintf/ft_printf_number_hex.c libftprintf/ft_printf_ptr.c \
       libftprintf/ft_printf_unsigned_int.c libftprintf/ft_printf_int_decimal.c

OBJS = ${SRCS:.c=.o}

POBJS = ${PSRCS:.c=.o}

NAME = push_swap

#LIBC = ar rcs

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} ${POBJS}
	${CC} -o ${NAME} ${OBJS} ${POBJS}
	chmod +x ${NAME}

all: ${NAME} ${OBJS} ${POBJS}

clean:
	${RM} ${OBJS} ${POBJS}

fclean: clean
	${RM} ${NAME} ${CNAME}

re: fclean all

#run: ${NAME} 
#	chmod +x push_swap

CNAME = libft.so

so: ${OBJS}
	${CC} -nostartfiles -shared -o ${CNAME} ${OBJS}

.PHONY: all clean fclean re so
