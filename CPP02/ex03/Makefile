SRCS			= main.cpp bsp.cpp Fixed.cpp Point.cpp
OBJS			= $(SRCS:.cpp=.o)

CLANG			= clang++
RM				= rm -f
HEADER			= Fixed.hpp Point.hpp
FLAGS			= -Wall -Wextra -Werror -std=c++98 -I $(HEADER)

NAME			= BSP

all:			$(NAME)

$(NAME):		$(HEADER) $(OBJS)
				$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re