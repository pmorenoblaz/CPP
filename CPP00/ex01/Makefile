# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 17:13:27 by pmoreno-          #+#    #+#              #
#    Updated: 2022/10/12 13:16:19 by pmoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NONE	= '\033[0m'
RED		= '\033[1;31m'
GREEN	= '\033[1;32m'
YELLOW	= '\033[1;33m'
BLUE	= '\033[1;34m'

SRCS = menu.cpp Contact.cpp PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = contactlist

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g

RM = rm -f

%.o:%.cpp
		@$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o) 

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -fsanitize=address
		@echo $(GREEN)$(NAME)": ready to be executed"$(NONE)

all: $(NAME)  

clean:
			@$(RM) $(OBJS)
			@echo $(RED)$(NAME)": objects removed"$(NONE)

fclean: clean
			@$(RM) $(NAME)
			@echo $(YELLOW)$(NAME)": files removed"$(NONE)

re: fclean $(NAME)

.PHONY: all clean fclean re
