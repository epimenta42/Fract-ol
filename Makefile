# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epimenta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/06 00:31:12 by epimenta          #+#    #+#              #
#    Updated: 2017/09/06 01:00:26 by epimenta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRC = $(addprefix ./, burnin.c \
	  julia.c \
	  utils.c \
	  mandel.c \
	  main.c)
FLAG = -Wall -Werror -Wextra -O3 -framework OpenGL -framework AppKit

OBJ = $(addprefix ./obj/, $(notdir $(SRC:.c=.o)))

PATHFT = ./libft

FLAGS = -Wall -Werror -Wextra

MACOSVERS := $(shell (sw_vers -productVersion | cut -b 1-5))

SIERRA = ./mlx/sierra

ELCAPITAN = ./mlx/el_capitan

LIBFT = -L$(PATHFT) -lft

OPENCL = -framework OpenCL

ifeq ($(MACOSVERS),10.11)
	MLXPATH = -L$(ELCAPITAN)
else ifeq ($(MACOSVERS),10.12)
	MLXPATH = -L$(SIERRA)
endif

MLX = $(MLXPATH) -lmlx -framework OpenGL -framework Appkit

all: libft.a mlx.a $(NAME)

libft.a:
	make -C $(PATHFT)

mlx.a:
ifeq ($(MACOSVERS),10.11)
	make -C $(ELCAPITAN)
else ifeq ($(MACOSVERS),10.12)
	make -C $(SIERRA)
endif

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(LIBFT) $(MLX) $(OPENCL) $(OBJ)

./obj/%.o: ./%.c
	gcc $(FLAGS) -o $@ -c $^

clean:
	make -C $(ELCAPITAN) clean
	make -C $(SIERRA) clean
	make -C $(PATHFT) clean
	/bin/rm -f $(OBJ)

fclean: clean
	make -C $(PATHFT) fclean
	/bin/rm -f $(NAME)

re: fclean all
