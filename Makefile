# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 17:42:38 by gdoce-si          #+#    #+#              #
#    Updated: 2024/04/15 17:44:15 by gdoce-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
DEPS = .
RM = rm -f
AR = ar -rc

OBS = 	ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
			ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o \
			ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o \
			ft_strdup.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o \
			ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o

BONUS_OBS =	ft_lstadd_back.o ft_lstadd_front.o ft_lstclear.o \
			ft_lstdelone.o ft_lstiter.o ft_lstlast.o \
			ft_lstmap.o ft_lstnew.o ft_lstsize.o

%.o : %.c 
	$(CC) $(FLAGS) -c $< -o $@ -I $(DEPS)

all: $(NAME)

$(NAME): $(OBS)
	$(AR) $(NAME) $^

bonus: $(OBS) $(BONUS_OBS)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBS) $(BONUS_OBS)

fclean: clean
	$(RM) $(NAME) $(BONUS_OBS)

re: fclean all

rebonus: fclean bonus
