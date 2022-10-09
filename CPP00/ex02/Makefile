SRCS			= tests.cpp Account.cpp
OBJS			= $(SRCS:.cpp=.o)

CLANG			= clang++
RM				= rm -f
HEADER			= Account.hpp
FLAGS			= -Wall -Wextra -Werror -std=c++98 -I $(HEADER).

NAME			= tests

all:			$(NAME)

$(NAME):		$(HEADER) $(OBJS)
				$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re