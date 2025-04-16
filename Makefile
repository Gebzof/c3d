NAME = c3d

SRCS =	srcs/main.c\
		srcs/parssing.c\
		srcs/c3d_utils.c\
		srcs/init.c\
		srcs/build_map.c\


LIBFTAR = 	libft/libft.a

MLXAR = minilibx-linux/libmlx_Linux.a

OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

CFLAGS = -Wall -Werror -Wextra -g3

CC = cc

OBJDIR = obj

SRCDIR = srcs

.PHONY = re fclean clean all

all : $(NAME)


$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@mkdir -p $(dir $@)
	@printf "$(GREEN)Compiling c3d : $(WHITE)$< $(RESET)"
	@$(CC) $(CFLAGS) -I/usr/include -Iminilibx-linux -O3 -c $< -o $@
	@printf "\r\033[K"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(NAME): $(LIBFTAR) $(MLXAR)  $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFTAR) $(MLXAR)  -Iminilibx-linux -Lminilibx-linux -lmlx -lXext -lX11 -lm -lz -o $(NAME)

$(LIBFTAR) :
	make -sC libft

$(MLXAR) :
	git clone https://github.com/42Paris/minilibx-linux.git minilibx-linux
	make -sC minilibx-linux

clean :
	@rm -rf $(OBJDIR)
	make clean -sC minilibx-linux
	make clean -sC libft

fclean : clean
	@rm -f $(NAME)
	make fclean -sC libft
	rm -rf minilibx-linux

re : fclean all