# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 17:55:27 by otangkab          #+#    #+#              #
#    Updated: 2023/09/13 16:21:08 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC	=	megaphone.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	$(info create megaphone in c++.)
	@echo "havefun ..."

clean:
	rm -rf $(NAME)
	@echo "remove file."

fclean:	
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
