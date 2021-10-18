# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 16:53:12 by oozsertt          #+#    #+#              #
#    Updated: 2021/10/18 17:10:32 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so-long
FT_NAME = libft.a
MLX_NAME = libmlx.a

SRCS_PATH = .

OBJ_DIR = $(BUILD)/obj

LIB_DIR =	lib/Libft lib/mlx
FT_DIR =	lib/Libft
MLX_DIR =	lib/mlx

INC_DIR = $(shell find includes -type d) \
				$(shell find lib/Libft/includes -type d) \
				$(shell find lib/mlx -type d)

BUILD = .build

SRCS = $(wildcard *.c)

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

MFLAGS =	-framework OpenGL -framework AppKit
CFLAGS =	-Wall -Werror -Wextra
IFLAGS		=	$(foreach dir, $(INC_DIR), -I $(dir))

all : $(NAME)

$(NAME) : install $(OBJS)
	@gcc $(CFLAGS) $(OBJS) $(MFLAGS) $(FT_DIR)/$(FT_NAME) $(MLX_DIR)/$(MLX_NAME) -o $(NAME)
	@echo "Executable successfully created\n"

$(OBJ_DIR)/%.o : $(SRCS_PATH)/%.c | $(BUILD)
	@gcc $(CFLAGS) -c $< $(IFLAGS) -o $@

$(BUILD):
	@mkdir $@ $(OBJ_DIR)
	@echo "Object directory created\n"
	@echo "Compiling..\n"

install:
	@$(foreach dir, $(LIB_DIR), make -C $(dir);)

install-fclean:
	@$(foreach dir, $(LIB_DIR), make -C $(dir) fclean;)

install-clean:
	@$(foreach dir, $(LIB_DIR), make -C $(dir) clean;)

install-re:
	@$(foreach dir, $(LIB_DIR), make -C $(dir) re;)

clean :
	@rm -rf $(BUILD)
	@echo "Object directory deleted\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "Executable removed\n"

re : fclean all
