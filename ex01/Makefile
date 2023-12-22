CXX = c++

CXXFLAGS = -Wall -Wextra -Werror

NAME = PhoneBook

all: $(NAME)

$(NAME): PhoneBook.cpp Contact.cpp main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(NAME)
