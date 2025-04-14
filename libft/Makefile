# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gebz <gebz@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 12:59:03 by gpichon           #+#    #+#              #
#    Updated: 2025/03/29 15:34:55 by gebz             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putendl_fd.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putnbr_fd.c  ft_putstr_fd.c ft_split.c ft_strchr.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
	ft_atol.c ft_free_tabtab.c ft_realloc.c ft_split_guillemet.c ft_split_guillemet_utils.c \
	ft_strjoin_free.c flood_fill.c ft_atoi_base.c is_power_of_2.c

.PHONY = re fclean clean all ft_fprintf

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = cc

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(MAKE) -C ft_fprintf
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C ft_fprintf

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ft_fprintf

re: fclean all