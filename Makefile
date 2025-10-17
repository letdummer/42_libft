# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/01 15:47:59 by ldummer-          #+#    #+#              #
#    Updated: 2025/10/17 17:47:01 by ldummer-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
# obs: when need to use ft_printf or gnl, compile libft like:
# $(LIBFT_LIB):
#	make extra -C $(LIBFT_DIR)

#------------------------------------------------------------------------------#
#									FILES  				     				   #
#------------------------------------------------------------------------------#

BUILD_DIR	= .build
TEMP_DIR	= .temp
LIBFT_DIR	= ./libft

SRC =	$(addprefix $(LIBFT_DIR)/, ft_atoi.c 		\
	ft_bzero.c		\
	ft_isalpha.c	\
	ft_is_space.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_itoa.c		\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_memset.c		\
	ft_putchar_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
	ft_realloc.c	\
	ft_split.c		\
	ft_strchr.c		\
	ft_strdup.c		\
	ft_striteri.c	\
	ft_strjoin.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c		\
	ft_strmapi.c	\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_strtrim.c	\
	ft_substr.c		\
	ft_swap.c		\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_calloc.c		\
	ft_isalnum.c)

BONUS_DIR= $(addprefix $(LIBFT_DIR)/, ft_lstadd_back.c		\
		ft_lstadd_front.c	ft_lstclear.c	ft_lstdelone.c \
		ft_lstiter.c	ft_lstlast.c	ft_lstmap.c	ft_lstnew.c	ft_lstsize.c)

EXTRA = $(addprefix $(LIBFT_DIR)/, ft_putchar_fd.c ft_putnbr.c 	ft_putchar.c\
        ft_strcpy.c ft_strcmp.c)

PRINTF_DIR	= ./ft_printf
PRINTF_SRC 	= $(addprefix $(PRINTF_DIR)/, ft_printf.c ft_printf_utils.c)

GNL_DIR 	= ./get_next_line
GNL_SRC		= $(addprefix $(GNL_DIR)/, get_next_line.c get_next_line_utils.c)

OBJS		= $(addprefix $(BUILD_DIR)/, $(notdir $(SRC:.c=.o)))
BONUS_OBJS	= $(addprefix $(BUILD_DIR)/, $(notdir $(BONUS:.c=.o)))
EXTRA_OBJS	= $(addprefix $(BUILD_DIR)/, $(notdir $(EXTRA:.c=.o)))
PRINTF_OBJS	= $(addprefix $(BUILD_DIR)/, $(notdir $(PRINTF_SRC:.c=.o)))
GNL_OBJS	= $(addprefix $(BUILD_DIR)/, $(notdir $(GNL_SRC:.c=.o)))

#------------------------------------------------------------------------------#
#								COMPILATION 		  						   #
#------------------------------------------------------------------------------#

MAKE		= make -C
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
DFLAGS		= -g
INCLUDE 	= -I.
RM			= rm -rf
AR 			= ar rcs
MKDIR_P		= mkdir -p

#------------------------------------------------------------------------------#
#				TEMPORARY FILE TO CHECK NORMINETTE   						   #
#------------------------------------------------------------------------------#
TEMP_DIR	= .temp

$(TEMP_DIR):
	mkdir -p $(TEMP_DIR)
	@echo "* $(YELLOW)Creating $(TEMP_DIR) folder:$(RESET) $(_SUCCESS)"

### Message Vars
_SUCCESS 		= [$(GREEN_BOLD)SUCCESS$(RESET)]
_INFO 			= [$(BLUE)INFO$(RESET)]
_NORM 			= [$(PURPLE)Norminette$(RESET)]
_NORM_INFO 		= $(BLUE)File no:$(RESET)
_NORM_SUCCESS 	= $(GREEN_BOLD)=== OK:$(RESET)
_NORM_ERR 		= $(RED_BOLD)=== KO:$(RESET)
_SEP 			= ================================================



#------------------------------------------------------------------------------#
#								BASE		 		  						   #
#------------------------------------------------------------------------------#

all: $(NAME)

$(BUILD_DIR):
	@$(MKDIR_P) $(BUILD_DIR)
	@echo "$(CYAN)Compiling$(RESET)"

$(BUILD_DIR)/%.o: $(LIBFT_DIR)/%.c
	@printf "$(GREEN_BOLD)█$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(PRINTF_DIR)/%.c
	@printf "$(GREEN_BOLD)█$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(GNL_DIR)/%.c
	@printf "$(GREEN_BOLD)█$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(BUILD_DIR) $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	$(call success, "Build complete: $(NAME) 📚 ✨")


bonus: $(BUILD_DIR) $(OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "$(NAME) compiled w/ bonus: $(SUCCESS)$(RESET)"

extra: $(BUILD_DIR) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@$(AR) $(NAME) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)
	@echo "$(NAME) compiled w/ extras $(SUCCESS)$(RESET)"



#------------------------------------------------------------------------------#
#								CLEAN-UP RULES 		  						   #
#------------------------------------------------------------------------------#
#	clean the .o objects
clean:
	$(call text, "Removing object files [...]")
	@$(RM) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS) $(PRINTF_OBJS) $(GNL_OBJS)
	$(call success, "Object files cleaned. 💣"); \

fclean: clean
	$(call text, "Removing library file...")
	@$(RM) $(NAME)
	@$(RM) $(BUILD_DIR)
	$(call success, "Library file cleaned. 💥")

re: fclean all
	@echo "\n"
	$(call success, "All files have been recompiled ✅")

#------------------------------------------------------------------------------#
#								EXTRA		 		  						   #
#------------------------------------------------------------------------------#
#________ NORMINETTE ___________________________________________#
# Run norminette on all files

norm: $(TEMP_DIR)
	@printf "${_NORM}: $(BLUE)$(SRC_DIR)$(RESET)\n"
	@ls $(SRC_DIR) | wc -l > $(TEMP_DIR)/norm_ls.txt
	@printf "$(_NORM_INFO) $$(cat $(TEMP_DIR)/norm_ls.txt)\n"
	@printf "$(_NORM_SUCCESS) "
	@norminette $(SRC_DIR) > $(TEMP_DIR)/norm_output.txt; \
	count_ok=$$(grep -c "OK" $(TEMP_DIR)/norm_output.txt); \
	count_total=$$(cat $(TEMP_DIR)/norm_ls.txt); \
	count_ko=$$(grep -c "KO" $(TEMP_DIR)/norm_output.txt); \
	if [ $$count_ok -eq $$count_total ]; then \
		printf "$(GREEN_BOLD)[SUCCESS] All files passed Norminette! ✅$(RESET)\n"; \
	else \
		cat $(TEMP_DIR)/norm_output.txt | grep -v "OK" | sed 's/.*/$(RED_BOLD)&$(RESET)/'; \
	fi;
	@echo "$(CYAN_BOLD)$(_SEP)$(RESET)"


#------------------------------------------------------------------------------#
#								HELP MENU	 		  						   #
#------------------------------------------------------------------------------#
help:
	@echo "Available options:"
	@echo "$(PURPLE)make            - Compiles the project and creates the library $(NAME).$(RESET)"
	@echo "$(PURPLE)make clean      - Removes object files (.o).$(RESET)"
	@echo "$(PURPLE)make fclean     - Removes object files and the library $(NAME).$(RESET)"
	@echo "$(PURPLE)make re         - Cleans and recompiles the project.$(RESET)"
	@echo "$(PURPLE)make help       - Displays this help message.$(RESET)"


#------------------------------------------------------------------------------#
#						COLORS AND WARNINGS		 	 						   #
#------------------------------------------------------------------------------#
# font name for titles: ANSI REGULAR
# https://patorjk.com/software/taag/#p=display&f=ANSI%20Regular&t=push_swap

# or https://www.asciiart.eu/text-to-ascii-art
# Alligator width 80

#________		DEFINING ANSI COLORS___________________________________________#

#RED_BOLD	  := $(shell echo "\033[1;31m")
#GREEN_BOLD	:= $(shell echo "\033[1;32m")
#PURPLE  := $(shell echo "\033[0;35m")
#BLUE	 := $(shell echo "\033[0;34m")
#CYAN	:= $(shell echo "\033[0;36m")
#CYAN_BOLD	:= $(shell echo "\033[1;36m")
#YELLOW	:= $(shell echo "\033[0;33m")
#RESET	:= $(shell echo "\033[0m")

RED_BOLD		= \033[1m\033[38;5;160m
GREEN_BOLD		= \033[1m\033[38;5;114m
PURPLE  		= \033[38;5;177m
BLUE			= \033[38;5;81m
CYAN			= \033[38;5;50m
CYAN_BOLD		= \033[1m\033[38;5;50m
YELLOW			= \033[38;5;221m
RESET			= \033[0m

#________		FUNCTIONS TO PRINT COLORS______________________________________#

text = @echo "$(PURPLE)$(1)$(RESET)"
warn = @echo "$(BLUE)$(1)$(RESET)"
error = @echo "$(RED_BOLD)$(1)$(RESET)"
success = @echo "$(GREEN_BOLD)$(1)$(RESET)"
highligth = @echo "$(CYAN)$(1)$(RESET)"
highligth_bold = @echo "$(CYAN_BOLD)$(1)$(RESET)"

#______________________________________________________________________________#
.PHONY: all clean fclean re help
