# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 16:53:12 by oozsertt          #+#    #+#              #
#    Updated: 2021/11/07 19:22:37 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS_PATH =	$(shell find srcs -type d)

OBJ_DIR = $(BUILD)/obj

LIB_DIR =	lib/Libft lib/mlx
FT_DIR =	lib/Libft
MLX_DIR =	lib/mlx

INC_DIR = $(shell find includes -type d) \
				$(shell find lib/Libft/includes -type d) \
				$(shell find lib/mlx -type d)

BUILD = .build

vpath %.c $(foreach dir, $(SRCS_PATH), $(dir):)

SRCS = 	so_long.c \
events.c \
find_and_put_exitopen_sprite.c patrol_move_bonus.c put_animated_collectibles_bonus.c \
put_background_sprite.c put_collectible_sprite.c put_exitopen_sprite.c put_exit_sprite.c \
put_monster_sprite_bonus.c put_move_count_bonus.c put_player_sprite.c put_wall_sprite.c \
put_whole_map.c render_next_frame.c set_animated_collectibles_bonus.c set_patrol_monster_bonus.c \
free_engine.c malloc_engine.c \
arg_check.c create_map.c cross_check.c final_check.c map_check.c \
movements.c \
close_window.c my_mlx_pixel_put.c set_utils_value_bonus.c \

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

LIB = ft mlx_Linux

MFLAGS =	-lXext -lX11 -lm
CFLAGS =	-Wall -Werror -Wextra
BFLAGS =	-DBONUS=1
NOBFLAGS =	-DBONUS=0

IFLAGS		=	$(foreach dir, $(INC_DIR), -I $(dir))

LFLAGS		=	$(foreach dir, $(LIB_DIR), -L $(dir)) \
				$(foreach lib, $(LIB), -l $(lib)) \
				$(MFLAGS)

all :
	@make BONUS=$(NOBFLAGS) $(NAME)

$(NAME) : install $(OBJS)
	@cc $(CFLAGS) $(BONUS) $(OBJS) $(LFLAGS) -o $(NAME)
	@echo "Executable successfully created\n"

$(OBJ_DIR)/%.o : %.c | $(BUILD)
	@cc $(CFLAGS) $(BONUS) -c $< $(IFLAGS) -o $@

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

bonus : fclean
	@make BONUS=$(BFLAGS) $(NAME)

re : fclean all
