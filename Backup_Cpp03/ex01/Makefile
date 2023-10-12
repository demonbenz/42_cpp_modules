# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 17:44:48 by otangkab          #+#    #+#              #
#    Updated: 2023/09/30 16:51:56 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ScavTrap
CC	=	C++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	ClapTrap.cpp ScavTrap.cpp
MAIN	=	main.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) $(MAIN) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re:	clean all

.PHONY:	clean fclean re	all
