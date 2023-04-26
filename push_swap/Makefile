# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 13:58:55 by lpeeters          #+#    #+#              #
#    Updated: 2023/04/26 14:38:31 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#find sources
SRCS = ${shell find . -name "*.c" -not -path "./push_swap_visualizer/*"}

#find libftprintf sources specifically
PSRCS = ${filter libftprintf/%,${SRCS}}

#object directory
OBJ_DIR = OBJS/

#convert c files into object files
OBJS = ${SRCS:%.c=${OBJ_DIR}%.o}

#convert c files into object files
POBJS = ${PSRCS:%.c=${OBJ_DIR}%.o}

#program name
NAME = push_swap

#make into library file
#LIBC = ar rcs

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

#make project into program
${NAME}: ${OBJS} ${POBJS}
	${MK_DIR} 
	${CC} -o ${NAME} ${OBJS} ${POBJS}
	chmod +x ${NAME}

#make
all: ${NAME}

#clean object files and directories
clean:
	${RM} ${OBJ_DIR}

#clean everything that was made
fclean: clean
	${RM} ${NAME} ${CNAME}

#remake
re: fclean all

#custom name (only relevant for testing libft)
#CNAME = libft.so

#testing
#so: ${POBJS}
#	${CC} -nostartfiles -shared -o ${CNAME} ${POBJS}

#targets
.PHONY: all clean fclean re so
