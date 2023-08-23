
NAME		= fixed

CXX			= c++

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

OBJ 		= $(SRC:%.cpp=%.o)

SRC			= main.cpp Fixed.cpp

all		: $(NAME)

$(NAME)	: $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.phony	: all clean fclean re