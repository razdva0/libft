# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtitan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/16 11:39:33 by mtitan            #+#    #+#              #
#    Updated: 2021/10/16 11:39:37 by mtitan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES	= 	ft_memset.c			ft_atoi.c			ft_bzero.c\
			ft_isalnum.c		ft_isalpha.c		ft_isascii.c\
			ft_isdigit.c		ft_islower.c		ft_isprint.c\
			ft_isupper.c		ft_memchr.c			ft_memcmp.c\
			ft_memcpy.c			ft_memmove.c		ft_memset.c\
			ft_strchr.c			ft_strlcat.c		ft_strlcpy.c\
			ft_strlen.c			ft_strncmp.c		ft_strnlen.c\
			ft_strnstr.c		ft_strrchr.c		ft_strcpy.c\
			ft_tolower.c		ft_toupper.c		ft_isspace.c\
			ft_calloc.c			ft_strdup.c			ft_substr.c\
			ft_strjoin.c		ft_strtrim.c		ft_strmapi.c\
			ft_striteri.c		ft_putchar_fd.c		ft_putstr_fd.c\
			ft_putendl_fd.c		ft_putnbr_fd.c		ft_itoa.c\
			ft_numlen.c			ft_split.c			ft_strnew.c\
			ft_strclr.c			ft_strjoin2.c		ft_strcmp.c

FILES_B	= 	ft_lstnew.c			ft_lstadd_front.c		ft_lstsize.c\
			ft_lstlast.c		ft_lstadd_back.c		ft_lstdelone.c\
			ft_lstclear.c		ft_lstiter.c			ft_lstmap.c

HEADER	=	libft.h
OBJ		=	$(patsubst %.c, %.o, $(FILES))
OBJ_B	=	$(FILES_B:%.c=%.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)
AR		=	ar rcs
RM		=	rm -f

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus	:
	@make OBJ="$(OBJ_B)" all

clean	:
	@rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all
