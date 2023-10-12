# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 17:44:48 by otangkab          #+#    #+#              #
#    Updated: 2023/09/25 11:53:47 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BSP
CC	=	C++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Fixed.cpp Point.cpp bsp.cpp
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
