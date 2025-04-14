NAME = c3d

SRCS =	srcs/main.c\
		srcs/parssing.c\
		srcs/c3d_utils.c\

LIBFTAR = 	libft/libft.a

MLXAR = minilibx-linux/libmlx_Linux.a

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g3

CC = cc

.PHONY = re fclean clean all

all : $(NAME)

%.o: %.C
	@$(CC) $(CFLAGS) -I/usr/include -Iminilibx-linux -O3 -c $< -o $@
	@$(CC) $(CFLAGS) $(SRCS) -c $< -o $@

$(NAME): $(LIBFTAR) $(MLXAR)  $(OBJS)
	@$(CC) $(OBJS) $(LIBFTAR) $(MLXAR)  -Iminilibx-linux -Lminilibx-linux -lmlx -lXext -lX11 -lm -lz -o $(NAME)

$(LIBFTAR) :
	@make -sC libft

$(MLXAR) :
	@git clone https://github.com/42Paris/minilibx-linux.git minilibx-linux
	@make -sC minilibx-linux

clean :
	@rm -f $(OBJS)
	@rm -f $(NAME)
	make clean -sC minilibx-linux
	make clean -sC libft

fclean : clean
	make fclean -sC libft
	rm -rf minilibx-linux

re : fclean all