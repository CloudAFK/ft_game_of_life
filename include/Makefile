# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romasant <romasant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/08 17:14:48 by romasant          #+#    #+#              #
#    Updated: 2026/08/09 00:11:50 by romasant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror -g
NAME= a.out
OBJS_SRCS= ../srcs/*.c
OBJS_UTILS= ../utils/*.c


all:
	@if [ "$(MAKECMDGOALS)" != "re" ]; then \
		echo "build OK !"; \
	fi
	@$(CC) $(CFLAGS) $(OBJS_SRCS) $(OBJS_UTILS) -o $(NAME)

clean:
	@rm -f *.o
	@echo "clean OK !"

fclean:
	@rm -f *.o $(NAME)
	@echo "fclean OK !"

re: fclean all
	@echo "rebuild all."

.PHONY: all clean fclean re
