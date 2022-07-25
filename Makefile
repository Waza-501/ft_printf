# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ohearn <ohearn@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/25 20:34:13 by ohearn        #+#    #+#                  #
#    Updated: 2022/07/25 20:51:41 by ohearn        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
CC				=	@gcc
CFLAGS			=	-Wall -Werror -Extra -C
AR				=	@ar rcs
SRCS			=	ft_printf.c\

all:			$(NAME)
				$(info Finished compiling mandatory part!)

$(NAME):		$(OBJECTS)
					$(AR) $(NAME) $(OBJECTS)
$(OBJECTS)		$(SRCS)
					$(CC) $(CFLAGS) $(SRS)

clean:			
				@-rm rf $(OBJECTS)

fclean:			clean
				@-rm rf $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re
