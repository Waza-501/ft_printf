# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/25 20:34:13 by ohearn        #+#    #+#                  #
#    Updated: 2022/08/16 15:12:56 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra -c
AR				=	ar rcs
SRCS			=	ft_printf.c\
					print_p.c\

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
