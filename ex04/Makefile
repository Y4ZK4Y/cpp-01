NAME := sed

SRC := sed.cpp main.cpp parseInput.cpp
OBJ := $(SRC:.cpp=.o)

CC := g++
CFLAGS := -Wall -Wextra -Werror -g -fsanitize=address

# Directory for output files
OUTPUT_DIR := output

RM = /bin/rm -rf

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): | $(OUTPUT_DIR)

$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)

run: $(NAME)
	./$(NAME)
	mv *.replace $(OUTPUT_DIR)

clean:
	$(RM) $(OUTPUT_DIR) 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
