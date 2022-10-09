SRCS			= main.cpp contact.cpp phonebook.cpp
OBJS			= $(SRCS:.cpp=.o)

CLANG			= clang++
RM				= rm -f
HEADER			= contact.hpp phonebook.hpp
FLAGS			= -Wall -Wextra -Werror -std=c++98 -I $(HEADER).

NAME			= PhoneBook

all:			$(NAME)

$(NAME):		$(HEADER) $(OBJS)
				$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re