NAME	=	push_swap


SRCS	=	push_swap.c		ft_atoi.c	ft_split.c	ft_strdup.c	ft_strlen.c	ft_substr.c	push_swap_tools.c	a_and_b_funcs.c	a_funcs.c	\
			b_funcs.c		sub_zero.c		push_swap_tools2.c	for_35_sort.c	checks.c

OBJS	=	$(SRCS:.c=.o)

CC		=	@gcc
RM		=	@rm -rf
OUT		=	-o push_swap
CFLAGS	=	-Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OUT) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)


re:	fclean $(NAME)

norm:
			norminette *.[ch]

.PHONY:	all clean fclean re