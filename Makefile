#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdesnogu <sdesnogu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 16:18:30 by sdesnogu          #+#    #+#              #
#    Updated: 2014/01/18 12:05:53 by sdesnogu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = 		libft.a

SRCS = 		\
			ft_atoi.c\
			ft_bzero.c\
			ft_initialize_line.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_itoa.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_lstadd.c\
			ft_lstnew.c\
			ft_memalloc.c\
			ft_memccpy.c\
			ft_memcmp.c\
			ft_memchr.c\
			ft_memcpy.c\
			ft_memdel.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putnbr.c\
			ft_putnbr_fd.c\
			ft_putnbrendl.c\
			ft_putstr.c\
			ft_putstr_fd.c\
			ft_radian.c\
			ft_sin_cos_tan.c\
			ft_square.c\
			ft_square_root.c\
			ft_strcat.c\
			ft_strchr.c\
			ft_strclr.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strdel.c\
			ft_strdup.c\
			ft_strequ.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strncat.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strnequ.c\
			ft_strnew.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strsplit.c\
			ft_strstr.c\
			ft_strsub.c\
			ft_strtrim.c\
			ft_tolower.c\
			ft_toupper.c\
			get_grid.c\
			get_next_line.c\

OBJS = 		$(SRCS:.c=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS)
			ar rcs $(NAME) $^
			ranlib $(NAME)

%.o: 		%.c
			gcc -Wall -Wextra -Werror -o $@ -c $< -I includes/

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: 	clean
