# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 16:53:12 by oozsertt          #+#    #+#              #
#    Updated: 2021/11/05 17:22:35 by oozsertt         ###   ########.fr        #
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

SRCS = 	$(foreach dir, $(SRCS_PATH), $(foreach file, $(wildcard $(dir)/*.c), $(notdir $(file))))

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
	@cc $(CFLAGS) -ggdb3 $(BONUS) $(OBJS) $(LFLAGS) -o $(NAME)
	@echo "Executable successfully created\n"

$(OBJ_DIR)/%.o : %.c | $(BUILD) # add $(SRCS_PATH)/ before %.c
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
