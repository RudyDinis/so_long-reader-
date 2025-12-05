NAME = so_long

SRCS =	main.c map/map.c utils/gnl/get_next_line_utils.c utils/gnl/get_next_line.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I .

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o so_long

clean: 
	rm -f ${OBJS}

fclean:	clean
	rm -f $(NAME)

re: fclean all
