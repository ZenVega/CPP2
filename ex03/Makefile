# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 15:45:04 by uschmidt          #+#    #+#              #
#    Updated: 2025/07/04 09:54:15 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fixed_03

SRC_FOLDER	= ./
OBJ_FOLDER	= build/

CFILES		:=
vpath %.cpp $(SRC_FOLDER)
CFILES += bsp.cpp
CFILES += main.cpp

vpath %.cpp $(SRC_FOLDER)Fixed
CFILES += Fixed.cpp
CFILES += FixedOps.cpp

vpath %.cpp $(SRC_FOLDER)Point
CFILES += Point.cpp

OFILES      = $(addprefix $(OBJ_FOLDER), $(notdir $(CFILES:.cpp=.o)))

CC			= c++

CFLAGS		= -g -Wall -Wextra -Werror -std=c++98

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) -o $(SRC_FOLDER)$(NAME) $(OFILES)

$(OBJ_FOLDER)%.o: %.cpp $(DEPS)
	mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -f $(OFILES)
	find $(SRC_FOLDER) -name "*.o" -delete

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
