# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    calculator.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 18:40:35 by lpeeters          #+#    #+#              #
#    Updated: 2024/04/09 23:40:41 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#prompt to the use what is expected
echo what would you like to calculate?

#read from the standard input
read pattern

#run the calculator program on the specified input
~/git/tools/calculator/calculator $pattern
