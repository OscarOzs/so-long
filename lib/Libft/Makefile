# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/30 18:27:35 by oozsertt          #+#    #+#              #
#    Updated: 2021/10/20 14:40:55 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_PATH = srcs
BUILD = .build
OBJ_DIR = $(BUILD)/obj

SRCS = ft_atoi_base.c ft_atoi.c ft_convert_base.c ft_convert_fullbinary.c \
ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_tolower.c \
ft_toupper.c ft_utoa_base_uppercase.c ft_utoa_base.c ft_utoa.c \
ft_malloc_failed.c ft_open_rdonly.c \
get_next_line.c gnl_fill_line.c gnl_get_line.c 

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo "Library successfully created"

$(OBJ_DIR)/%.o : $(SRCS_PATH)/%.c | $(BUILD)
	@gcc -I./includes $(FLAGS) -c $< -o $@

$(BUILD):
	@mkdir $@ $(OBJ_DIR)
	@echo "Object directory created"
	@echo "Compiling..\n"

clean :
	@rm -rf $(BUILD)
	@echo "Object directory deleted"

fclean : clean
	@rm -rf $(NAME)
	@echo "Library removed\n"

re : fclean all
