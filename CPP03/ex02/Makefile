SRCS			= main.cpp  ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS			= $(SRCS:.cpp=.o)

CLANG			= clang++
RM				= rm -f
HEADER			= ClapTrap.hpp
FLAGS			= -Wall -Wextra -Werror -std=c++98 -I $(HEADER)

NAME			= FlagTrap

all:			$(NAME)

$(NAME):		$(HEADER) $(OBJS)
				$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re