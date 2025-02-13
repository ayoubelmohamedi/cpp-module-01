# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/08 13:30:31 by ael-moha          #+#    #+#              #
#    Updated: 2025/02/13 17:53:09 by ael-moha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = main.cpp Zombiehorde.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98 -pedantic

NAME = zombieHorde

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
