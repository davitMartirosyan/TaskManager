NAME = manager
CC = gcc -I Includes/
FLAGS = -Wall -Wextra -Werror
SRC = $(wildcard src/*.c) taskManager.c
OBJ = $(SRC:.c=.o)
INCLUDES = $(wildcard Includes/*.h)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

.PHONNY: clean fclean all