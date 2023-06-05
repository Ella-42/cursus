# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    calculator.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 18:40:35 by lpeeters          #+#    #+#              #
#    Updated: 2023/06/05 18:46:55 by lpeeters         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#prompt to the use what is expected
echo what would you like to calculate?

#read from the standard input
read pattern

#run the calculator program on the specified input
~/Documents/github/tools/calculator $pattern
