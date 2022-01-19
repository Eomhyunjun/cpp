NAME			= Forms
CC				= clang++
FLAGS			= -Wall -Wextra -Werror -Wshadow -Wno-shadow
OBJDIR			= ./obj
INCDIR			= ./

SRCS			=	main.cpp \
					Bureaucrat.cpp \
					Form.cpp \
					ShrubberyCreationForm.cpp \
					RobotomyRequestForm.cpp \
					PresidentialPardonForm.cpp \

OBJS 			= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) -I. -o $(NAME) $(OBJS)

$(OBJDIR)/%.o:	./%.cpp
				mkdir $(OBJDIR) 2> /dev/null || true
				$(CC) $(FLAGS) -I$(INCDIR) -o $@ -c $<
clean:
				@rm -rf $(OBJDIR)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re