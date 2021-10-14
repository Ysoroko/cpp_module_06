# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 14:06:19 by ysoroko           #+#    #+#              #
#    Updated: 2021/10/14 11:09:56 by ysoroko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------------------------------- VARS ----------------------------------

NAME		=	ex01

SRC			=	main.cpp \
				Data.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

# -std=c++98 displays an error if an unauthorized function is left in the code
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow -Wno-conversion

EXE_NAME	=	-o $(NAME)

EXEC		=	$(NAME)

FILES		=	shrub \

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	rm -rf $(FILES)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

# ------------------------------------- TESTS ---------------------------------

test1: $(NAME)
	./$(NAME) 0

test2: $(NAME)
	./$(NAME) nan

test3: $(NAME)
	./$(NAME) 42.0f

.PHONY:	all clean fclean re run