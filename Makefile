# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 13:53:45 by dtanesha          #+#    #+#              #
#    Updated: 2020/05/03 12:24:19 by dtanesha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = SRC/*.c
INC = includes
NAME = libft.a
OBJECT = *.o

.PHONY: all clean

all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror  -c $(SRC) -I$(INC)
	ar rv $(NAME) $(OBJECT)

clean:
	/bin/rm -f *.o
	/bin/rm -f *.so

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
