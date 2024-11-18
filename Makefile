NAME = libftprintf.a 

SRC = buffer.c fmt.c functions.c main.c render_char.c utils.c

OBJECTS = $(SRC:.c=.o)

CFLAGS = cc -Wall -Werror -Wextra


$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

%.o: %.c Makefile printf.h
	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
