SRCS	= main.cpp Fixed.cpp
OBJS	= $(SRCS:.cpp=.o)

CXX		= clang++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

NAME	= ex01

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re