NAME		=	push_swap

NAME_BONUS	=	checker

CC			=	cc

CFLAGS		=	-g -Wall -Wextra -Werror

INCLUDE		=	-I.

LIB			=	-L./libft -lft

SRCS		=	srcs/commands/push.c \
				srcs/commands/rev_rotate.c \
				srcs/commands/rotate.c \
				srcs/commands/sort_stacks.c \
				srcs/commands/sort_three.c \
				srcs/commands/swap.c\
				srcs/push_swap/handle_errors.c \
				srcs/push_swap/init_a_to_b.c \
				srcs/push_swap/init_b_to_a.c \
				srcs/push_swap/push_swap.c \
				srcs/push_swap/split.c \
				srcs/push_swap/stack_init.c \
				srcs/push_swap/stack_utils.c

SRCS_BONUS	=	bonus/checker_bonus.c	\
				bonus/get_next_line_utils_bonus.c \
				bonus/get_next_line_bonus.c \
				bonus/checker_utils_bonus.c \
				bonus/checker_utils2_bonus.c \
				bonus/checker_utils3_bonus.c \
				bonus/push_bonus.c \
                bonus/rev_rotate_bonus.c \
                bonus/rotate_bonus.c \
                bonus/swap_bonus.c				

OBJS		= 	${SRCS:.c=.o}

OBJS_BONUS	= 	${SRCS_BONUS:.c=.o}

LIBPATH		= 	libft/

all:			${NAME}

${NAME}:		${OBJS}
			make -C ${LIBPATH}
			${CC} ${CFLAGS} $^ ${INCLUDE} ${LIB} -o $@

bonus:			${NAME_BONUS}

${NAME_BONUS}:	${OBJS_BONUS}
			make -C ${LIBPATH}
			${CC} ${CFLAGS} $^ ${INCLUDE} ${LIB} -o ${NAME_BONUS}

clean:
			make clean -C ${LIBPATH}
			rm -f ${OBJS} ${OBJS_BONUS}

fclean:			clean
			make fclean -C ${LIBPATH}
			rm -f ${NAME} ${NAME_BONUS}

re:				fclean all

.PHONY:			all clean fclean re