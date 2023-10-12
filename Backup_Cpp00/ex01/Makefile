# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 17:55:27 by otangkab          #+#    #+#              #
#    Updated: 2023/09/06 11:19:13 by otangkab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC		=	PhoneBook.cpp Contact.cpp
MAIN 	=	main.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) $(MAIN) -o $(NAME)
	@echo "\033[0;35m" "<-- Create My owsome Phonebook!!!!!!!. -->" "\033[0m"

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re:	clean all

.PHONY:	all clean re
