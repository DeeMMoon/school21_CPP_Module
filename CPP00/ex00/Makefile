SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

CLANG			= clang++
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -std=c++98.

NAME			= megaphone

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re