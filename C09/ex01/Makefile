CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

SRCDIR = srcs
INCDIR = includes

TARGET = libft.a
SRC = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJ = $(SRC:.c=.o)

all : $(TARGET)

%.o:%.c
	$(CC) $(CFLAGS) $< -o $@ -I $(INCDIR)

$(TARGET) : $(OBJ)
	ar cr $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re : fclean all

.PHONY:clean fclean re $(TARGET) all
