CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

all: $(NAME)

$(NAME): PhoneBook.cpp Contact.cpp main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(NAME)
