NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra

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
