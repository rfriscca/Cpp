NAME = myphonebook
SRC = Contact.class.cpp \
	  main.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp
	clang++ $(FLAGS) -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re $(NAME)
