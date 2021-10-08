# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 16:53:12 by oozsertt          #+#    #+#              #
#    Updated: 2021/10/08 17:31:06 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so-long
LIB_NAME = libft.a

SRCS_PATH = .

OBJ_DIR = $(BUILD)/obj

LIB_DIR = lib/Libft

INC_DIR = $(shell find includes -type d) \
				$(shell find lib/Libft/includes -type d)

BUILD = .build


SRCS = $(wildcard *.c)

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))


FLAGS = -Wall -Werror -Wextra

IFLAGS		=	$(foreach dir, $(INC_DIR), -I $(dir))


all : $(NAME)

$(NAME) : install $(OBJS)
	@gcc $(FLAGS) $(OBJS) $(LIB_DIR)/$(LIB_NAME) -o $(NAME)
	@echo "Executable successfully created\n"

$(OBJ_DIR)/%.o : $(SRCS_PATH)/%.c | $(BUILD)
	@gcc $(FLAGS) -c $< $(IFLAGS) -o $@

$(BUILD):
	@mkdir $@ $(OBJ_DIR)
	@echo "Object directory created\n"
	@echo "Compiling..\n"

install:
	@$(foreach dir, $(LIB_DIR), make -C $(dir);)

install-fclean:
	@$(foreach dir, $(LIB_DIR), make -C $(dir) fclean;)

install-re:
	@$(foreach dir, $(LIB_DIR), make -C $(dir) re;)

clean :
	@rm -rf $(BUILD)
	@echo "Object directory deleted\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "Executable removed\n"

re : fclean all
