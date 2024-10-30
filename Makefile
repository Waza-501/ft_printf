SRCS	=	fc_print_dec.c\
			fc_print_hex.c\
			fc_print_int.c\
			fc_print_pnt.c\
			fc_putchar.c\
			fc_putstr.c\
			utils.c\
			ft_printf.c\
				
NAME	=	libftprintf.a
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -c
AR		=	ar rcs
OBJS	=	$(SRCS:%.c=%.o)

all:		$(NAME)
			$(info Finished compiling ft_printf functions!)

$(NAME):	$(OBJS)
				$(AR) $(NAME) $(OBJS)
$(OBJS):	$(SRCS)
				$(CC) $(CFLAGS) $(SRCS)

clean:
			@rm -rf $(OBJS)
			@rm -rf $(BONUS)
			@echo ""
			@echo Removed ft_printf object files.

fclean:		clean
			@rm -rf $(NAME)
			@echo ""
			@echo Removed all ft_printf files.

re:	fclean all

.PHONY:		all, clean, fclean, re