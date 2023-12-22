CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all: $(NAME)

$(NAME): megaphone.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.o

fclean:
	rm -rf $(NAME)
	rm -rf *.o

re: clean all
