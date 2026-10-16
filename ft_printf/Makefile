NAME = ft_printf

SRCS = ft_printf.c main.c
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o
	
fclean:
	rm -f *.o $(NAME)

re: fclean all

.PHONY: clean fclean re
