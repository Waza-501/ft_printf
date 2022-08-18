# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/25 20:34:13 by ohearn        #+#    #+#                  #
#    Updated: 2022/08/18 16:57:45 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra -c -g
AR				=	ar rcs
SRCS			=	ft_printf.c\
					fc_print_hex.c\
					fc_print_dec.c\
					fc_print_str.c\
					fc_print_cha.c\


LIBFTLITE		=	libftlite/libftlite.a
OBJECTS			=	$(SRCS:%.c=%.o)


all:			$(NAME)
				@echo ""
				@echo Finished compiling mandatory part!

$(LIBFTLITE): 
				make -C libftlite
$(NAME):		$(OBJECTS) $(LIBFTLITE)
				$(AR) $(NAME) $(OBJECTS)
				ar -q $(LIBFTLITE) $(OBJECTS)
				cp $(LIBFTLITE) $(NAME)
					
$(OBJECTS):		$(SRCS)
					$(CC) $(CFLAGS) $(SRCS)

clean:			
				@rm -rf $(OBJECTS)
				@make clean -C ./libftlite
				@echo Removed object files.

fclean:			
				@rm -rf $(OBJECTS)
				@echo ""
				@echo Removed all object files.
				@rm -rf $(NAME)
				@make fclean -C ./libftlite
				@echo ""
				@echo Cleanup completed.

re:				fclean all

.PHONY:			all, clean, fclean, re
