# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hotph <hotph@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 16:31:02 by hotph             #+#    #+#              #
#    Updated: 2023/08/29 16:31:04 by hotph            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC 		=	cc
CFLAGS	=	-Wall -Wextra -Werror
SCRS	=	ft_memchr.c	ft_strcpy.c ft_strtrim.c ft_memcmp.c ft_strdup.c ft_atoi.c \
			ft_memcpy.c ft_striteri.c ft_substr.c ft_bzero.c ft_memmove.c ft_strjoin.c \
			ft_tolower.c ft_calloc.c ft_memset.c ft_strlcat.c ft_toupper.c ft_isalnum.c \
			ft_putchar_fd.c ft_strlcpy.c ft_isalpha.c ft_putendl_fd.c ft_strlen.c \
			ft_putnbr_fd.c ft_strmapi.c ft_isascii.c ft_putstr_fd.c ft_strncmp.c ft_isdigit.c \
			ft_split.c ft_strnstr.c ft_isprint.c ft_strcat.c ft_strrchr.c ft_itoa.c ft_strchr.c \
			ft_strstr.c 
BSCRS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS	=	$(SCRS:%.c=%.o)
BOBJS	=	$(BSCRS:%.c=%.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $@ $^

bonus:	$(OBJS) $(BOBJS)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJS) $(BOBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all