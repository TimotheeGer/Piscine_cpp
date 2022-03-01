# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 10:53:04 by tigerber          #+#    #+#              #
#    Updated: 2022/03/01 15:37:00 by tigerber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = contacts

SRCS = 	main.cpp				\
		Contact.class.cpp 		\
		PhoneBook.class.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I ./include/

HEADER = -I .

OBJ = $(SRCS:%.cpp=%.o)

#LIBS =

ADDED = echo "\033[92mPhoneBook build ⚙️ \033[0m"

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) && $(ADDED)

MAKEFLAGS += --silent

all: $(NAME)

%.o%.cpp:
	$(CXX) -c $(CXXFLAGS) -I $(HEADER) $< -o ${<:.cpp=.o}

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
