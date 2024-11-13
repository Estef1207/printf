NAME = libftprint.a 

SRC = utils.c, buffer.c, fmt.c, functions.c, buffer.c, printf.h

OBJS = $(SRC:.c=.o)

CFLAGS = cc -Wall -Werror -Wextra



all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c Makefile printf.h
	$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
