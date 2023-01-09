NAME			= awesome_phonebook
CC				= c++
FLAGS			= -Wall -Wextra -Werror -std=c++98
OBJDIR			= ./obj
INCDIR			= ./

SRCS			=	main.cpp \
					AwesomeHeom.cpp \
					PhoneBook.cpp \
					Contact.cpp \
					

OBJS 			= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) -I$(INCDIR) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o:	./%.cpp | $(OBJDIR)
				$(CC) $(FLAGS) -I$(INCDIR) -o $@ -c $<
$(OBJDIR):
				@mkdir -p $(OBJDIR)
clean:
				@rm -rf $(OBJDIR)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
