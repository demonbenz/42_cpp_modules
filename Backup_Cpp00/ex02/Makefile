# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 11:33:59 by otangkab          #+#    #+#              #
#    Updated: 2023/09/07 21:56:35 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Account
CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Account.cpp tests.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re:	clean all

.PHONY:	all clean fclean re
