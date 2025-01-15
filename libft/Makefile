
SRCS    =         	src/ft_printf.c \
					src/ft_putstr.c \
					src/ft_putnbr.c \
					src/ft_putchar.c \
					src/ft_putnbr_unsigned.c \
					src/ft_putnbr_hex.c \

NAME    = libft.a

OBJS    =  $(SRCS:.c=.o)

HEADERS    = libft/inc/

all : $(NAME)

.c.o: 
	cc -Wall -Wextra -Werror -I $(HEADERS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS) $(OBJSBONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all