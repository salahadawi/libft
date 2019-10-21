#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 18:05:28 by sadawi            #+#    #+#              #
#    Updated: 2019/10/17 12:00:52 by sadawi           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS =

OBJS =

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS) -I $(HDRS)
	ar rc $(NAME) $(OBJS)

clean: 
	/bin/rm -f $(OUTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all