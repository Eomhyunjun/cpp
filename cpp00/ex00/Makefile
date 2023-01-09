NAME	= megaphone
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

all:			$(NAME)
$(NAME):		$(OBJS)
				$(CC) $(FLAGS) -I. -o $(NAME) $(OBJS)

./%.o:			./%.cpp
				$(CC) $(FLAGS) -I. -o $@ -c $<

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re