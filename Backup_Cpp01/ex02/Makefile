# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 17:44:48 by otangkab          #+#    #+#              #
#    Updated: 2023/09/15 16:54:42 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	HiThisisBrain
CC	=	C++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
MAIN	=	main.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(MAIN) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re:	clean all

.PHONY:	clean fclean re	all
