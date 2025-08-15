NAME = so_long
CC = gcc
CFLAGS = -Wall -Wextra -Werror
MLX_PATH = ./minilibx-linux
MLX_LIB = $(MLX_PATH)/libmlx.a
MLX_FLAGS = -L$(MLX_PATH) -lmlx -lXext -lX11 -lm

$(NAME): main.c $(MLX_LIB)
	$(CC) main.c -I$(MLX_PATH) $(MLX_FLAGS) -o $(NAME)

$(MLX_LIB):
	make -C $(MLX_PATH)

clean:
	make -C $(MLX_PATH) clean

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
