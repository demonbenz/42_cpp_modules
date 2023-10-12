# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 17:44:48 by otangkab          #+#    #+#              #
#    Updated: 2023/09/20 18:14:12 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl
CC	=	C++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
MAIN	=	main.cpp
SRCS	=	Harl.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) $(MAIN) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re:	clean all

.PHONY:	clean fclean re	all
