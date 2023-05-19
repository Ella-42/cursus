# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 20:49:34 by lpeeters          #+#    #+#              #
#    Updated: 2023/05/18 19:34:46 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#program name
NAME = pipex

#compiler
CC = gcc

#remove
RM = rm -rf

#flags
CFLAGS = -Wall -Wextra -Werror

#find sources
SRCS = ${shell find . -name "*.c" -not -path "*lib*"}

#find other makefiles
MKFL = ${shell find . -mindepth 2 -name "Makefile" -o -name "makefile"}

#find library files
LIBS = ${shell find . -name "*.a"}

#fetch object files
OBJS = ${SRCS:%.c=${OBJ_DIR}%.o}

#fetch makefile directory
MKFL_DIRS = ${dir ${MKFL}}

#fetch library directory
LIB_DIRS = ${dir ${LIBS}}

#fetch library filename
LIB_PNAMES = ${notdir ${LIBS}} #cut off the path
LIB_LNAMES = ${LIB_PNAMES:lib%.a=%} #cut off the library files' "lib" prefix
LIB_NAMES = ${LIB_LNAMES:.a=} #cut off the library files' ".a" suffix

#compilation flags, their directories and names for any library
LIB_ALL = ${foreach libdir,${LIB_DIRS},-L ${libdir}} \
	  ${foreach libname,${LIB_NAMES},-l ${libname}}

#object directory
OBJ_DIR = OBJS/

#make directories for object files
MK_DIR = mkdir -p ${@D}

#make other projects that were found
MKFL_ALL = ${foreach mkfldir,${MKFL_DIRS}, make -C ${mkfldir}}

#make
all: MK ${NAME}

#make object files
${OBJ_DIR}%.o: %.c
	${MK_DIR}
	${CC} ${CFLAGS} -c $< -o $@

#make project into program
${NAME}: ${OBJS} pipex.h
	${CC} -g -fsanitize=address ${OBJS} ${LIB_ALL} -o ${NAME}
	chmod +x ${NAME}

#make library
MK:
	${MKFL_ALL}

#clean object files and directories
clean:
	${RM} ${OBJ_DIR}
	${foreach mkfldir,${MKFL_DIRS}, make -C ${mkfldir} clean}

#clean everything that was made
fclean: clean
	${RM} ${NAME}
	${foreach mkfldir,${MKFL_DIRS}, make -C ${mkfldir} fclean}

#remake
re: fclean all

#targets
.PHONY: all clean fclean re MK
