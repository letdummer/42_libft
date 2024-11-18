# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 15:37:26 by ldummer-          #+#    #+#              #
#    Updated: 2024/11/11 12:03:44 by ldummer-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definindo as cores ANSI
RED     := $(shell echo "\033[1;31m")
GREEN   := $(shell echo "\033[1;32m")
PURPLE  := $(shell echo "\033[0;35m")
BLUE    := $(shell echo "\033[0;34m")
RESET   := $(shell echo "\033[0m")

# Funções para imprimir texto com cores
text = @echo "$(PURPLE)$(1)$(RESET)"
warn = @echo "$(BLUE)$(1)$(RESET)"
error = @echo "$(RED)$(1)$(RESET)"
success = @echo "$(GREEN)$(1)$(RESET)"

#################### Files #####################
NAME= libft.a

#SRC_DIR = $(wildcard *.c)
OBJ_DIR = $(SRC_DIR:.c=.o)

################## Compilation ##################
CC= cc
CFLAGS= -Wall -Wextra -Werror

################### Commands ###################
RM= rm -f

SRC_DIR= ft_atoi.c 		ft_bzero.c		ft_calloc.c		ft_isalnum.c \
	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c \
	ft_itoa.c		ft_memchr.c		ft_memcmp.c		ft_memcpy.c \
	ft_memmove.c	ft_memset.c		ft_putchar_fd.c	ft_putendl_fd.c \
	ft_putnbr_fd.c	ft_putstr_fd.c	ft_split.c		ft_strchr.c \
	ft_strdup.c		ft_striteri.c	ft_strjoin.c	ft_strlcat.c \
	ft_strlcpy.c	ft_strlen.c		ft_strmapi.c	ft_strncmp.c \
	ft_strnstr.c	ft_strrchr.c	ft_strtrim.c	ft_substr.c \
	ft_toupper.c	ft_tolower.c



################################################

all: $(NAME)

$(NAME): $(OBJ_DIR)
	$(call success, "All files have been compiled ✅")
	$(call text, "Creating library $(NAME) [...]")
	@ar rcs $(NAME) $(OBJ_DIR)
	$(call success, "Build complete: $(NAME) 📚 ✨")

%.o: %.c 
	$(call warn, "Compiling [...] $<")
	@$(CC) $(CFLAGS) -c $< -o $@

################ Clean-up Rules ################
clean:
	$(call text, "Removing object files [...]")
	@$(RM) $(OBJ_DIR)
	$(call success, "Object files cleaned. 💣"); \

fclean: clean
	$(call text, "Removing library file...")
	@$(RM) $(NAME)
	$(call success, "Library file cleaned. 💥")

re: fclean all
	$(call success, "All files have been recompiled ✅")

#################### Help #####################
help:
	@echo "Available options:"
	@echo "$(PURPLE)make            - Compiles the project and creates the library $(NAME).$(RESET)"
	@echo "$(PURPLE)make clean      - Removes object files (.o).$(RESET)"
	@echo "$(PURPLE)make fclean     - Removes object files and the library $(NAME).$(RESET)"
	@echo "$(PURPLE)make re         - Cleans and recompiles the project.$(RESET)"
	@echo "$(PURPLE)make help       - Displays this help message.$(RESET)"



.PHONY: all clean fclean re help
