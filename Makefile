NAME:= libft.a

SRCS:= $(wildcard *.c)

OBJ=$(SRCS:.c=.o)

#SRCS_B := #...

CC=cc

CFLAGS=-Werror -Wextra -Wall -I .

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: clean re fclean
