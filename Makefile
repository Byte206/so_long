NAME = so_long
CC = gcc
#CFLAGS = -Wall -Wextra -Werror

# Rutas
MLX_PATH = ./minilibx-linux
LIBFT_PATH = ./libft
LIBFT_SRC_PATH = ./libft/libft

# Librerías
MLX_LIB = $(MLX_PATH)/libmlx.a
LIBFT_LIB = $(LIBFT_PATH)/libft.a
MLX_FLAGS = -L$(MLX_PATH) -lmlx -lXext -lX11 -lm

# Archivos fuente
SRCS = so_long.c file_map_checker.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(MLX_LIB) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_LIB) $(MLX_FLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I$(MLX_PATH) -I$(LIBFT_PATH) -c $< -o $@

$(MLX_LIB):
	make -C $(MLX_PATH)

$(LIBFT_LIB):
	make -C $(LIBFT_SRC_PATH)
	cp $(LIBFT_SRC_PATH)/libft.a $(LIBFT_PATH)/

clean:
	make -C $(MLX_PATH) clean
	make -C $(LIBFT_SRC_PATH) clean
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_PATH)/libft.a

re: fclean all

.PHONY: all clean fclean re
