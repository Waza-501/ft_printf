# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/25 20:34:13 by ohearn        #+#    #+#                  #
#    Updated: 2022/08/17 12:07:34 by owen          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra -c
AR				=	ar rcs
SRCS			=	ft_printf.c\
					print_hex.c\
					print_dec.c\

LIBFT			=	libft/libft.a
OBJECTS			=	$(SRCS:%.c=%.o)


all:			$(NAME)
				@echo ""
				@echo Finished compiling mandatory part!

$(LIBFT): 
				make -C libft
$(NAME):		$(OBJECTS) $(LIBFT)
				$(AR) $(NAME) $(OBJECTS)
				ar -q $(LIBFT) $(OBJECTS)
				cp $(LIBFT) $(NAME)
					
$(OBJECTS):		$(SRCS)
					$(CC) $(CFLAGS) $(SRCS)

clean:			
				@rm -rf $(OBJECTS)
				@make clean -C ./libft
				@echo Removed object files.

fclean:			
				@rm -rf $(OBJECTS)
				@echo ""
				@echo Removed all object files.
				@rm -rf $(NAME)
				@make fclean -C ./libft
				@echo ""
				@echo Cleanup completed.

re:				fclean all

.PHONY:			all, clean, fclean, re
