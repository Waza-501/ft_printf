# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/25 20:34:13 by ohearn        #+#    #+#                  #
#    Updated: 2022/08/10 16:53:55 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra -C
AR				=	ar rcs
SRCS			=	ft_printf.c\

LIBFT			=	./libft/libft.a
OBJECTS			=	$(SRCS:%.c=%.o)


all:			$(LIBFT)
				$(NAME)
				$(info Finished compiling mandatory part!)

$(LIBFT): 
				Make -C ./libft
$(NAME):		$(OBJECTS)
					$(AR) $(NAME) $(OBJECTS)
$(OBJECTS):		$(SRCS)
					$(CC) $(CFLAGS) $(SRS)

clean:			
				-rm rf $(OBJECTS)
				Make clean -C ./libft

fclean:			clean
				-rm rf $(NAME)
				Make fclean -C ./libft

re:				fclean all

.PHONY:			all, clean, fclean, re
