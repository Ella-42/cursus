# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 13:58:55 by lpeeters          #+#    #+#              #
#    Updated: 2023/05/15 17:11:52 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#find sources
SRCS = ${shell find ./libftprintf -name "*.c"}

#object directory
OBJ_DIR = OBJS/

#convert c files into object files
OBJS = ${SRCS:%.c=${OBJ_DIR}%.o}

#convert c files into object files
POBJS = ${PSRCS:%.c=${OBJ_DIR}%.o}

#program name (library)
NAME = libft.a

#make into library file
LIBC = ar rcs

#compiler
CC = gcc

#remove
RM = rm -rf

#flags
CFLAGS = -Wall -Wextra -Werror
#make directories for object files
MK_DIR = mkdir -p ${@D}

#make object files
${OBJ_DIR}%.o: %.c
	${MK_DIR}
	${CC} ${CFLAGS} -c $< -o $@

#make project into library file
${NAME}: ${OBJS} ${POBJS}
	${MK_DIR}
	${LIBC} ${NAME} ${OBJS} ${POBJS}

#make
all: ${NAME}

#clean object files and directories
clean:
	${RM} ${OBJ_DIR}

#clean everything that was made
fclean: clean
	${RM} ${NAME}

#remake
re: fclean all

#targets
.PHONY: all clean fclean re
