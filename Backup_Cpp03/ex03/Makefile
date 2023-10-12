# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 17:44:48 by otangkab          #+#    #+#              #
#    Updated: 2023/10/03 15:43:48 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	DiamondTrap
CC			=	C++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
CHK_FLAGS	=	-Wshadow -Wno-shadow
SRCS		=	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
MAIN		=	main.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(CHK_FLAGS) $(SRCS) $(MAIN) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re:	clean all

.PHONY:	clean fclean re	all
