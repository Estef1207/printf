NAME	=	libftprintf.a
SRC	=	ft_printf.c	\
		utils.c	\
	
		
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

OBJS =	$(SRC:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
