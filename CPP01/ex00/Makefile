SRCS			= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS			= $(SRCS:.cpp=.o)

CLANG			= clang++
RM				= rm -f
HEADER			= Zombie.hpp

FLAGS			= -Wall -Wextra -Werror -std=c++98 -I $(HEADER)


NAME			= main

all:			$(NAME)

$(NAME):		$(HEADER) $(OBJS)
				$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re