# **************************************************************************** #
#                                                                              #
#			▗▖  ▗▖ ▗▄▖ ▗▖ ▗▖▗▄▄▄▖▗▄▄▄▖▗▄▄▄▖▗▖   ▗▄▄▄▖	     			       #
#			▐▛▚▞▜▌▐▌ ▐▌▐▌▗▞▘▐▌   ▐▌     █  ▐▌   ▐▌   	   				       #
#			▐▌  ▐▌▐▛▀▜▌▐▛▚▖ ▐▛▀▀▘▐▛▀▀▘  █  ▐▌   ▐▛▀▀▘	    			       #
#			▐▌  ▐▌▐▌ ▐▌▐▌ ▐▌▐▙▄▄▖▐▌   ▗▄█▄▖▐▙▄▄▖▐▙▄▄▖         			       #
#									     									   #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

#------------------------------------------------------------------------------#
#									FILES  				     				   #
#------------------------------------------------------------------------------#


#SRC_DIR = $(wildcard *.c)
OBJ_DIR = $(SRC_DIR:.c=.o)

SRC_DIR= ft_atoi.c 		ft_bzero.c		ft_calloc.c		ft_isalnum.c \
	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c \
	ft_itoa.c		ft_memchr.c		ft_memcmp.c		ft_memcpy.c \
	ft_memmove.c	ft_memset.c		ft_putchar_fd.c	ft_putendl_fd.c \
	ft_putnbr_fd.c	ft_putstr_fd.c	ft_split.c		ft_strchr.c \
	ft_strdup.c		ft_striteri.c	ft_strjoin.c	ft_strlcat.c \
	ft_strlcpy.c	ft_strlen.c		ft_strmapi.c	ft_strncmp.c \
	ft_strnstr.c	ft_strrchr.c	ft_strtrim.c	ft_substr.c \
	ft_toupper.c	ft_tolower.c

#------------------------------------------------------------------------------#
#								COMPILATION 		  						   #
#------------------------------------------------------------------------------#

CC= cc
CFLAGS= -Wall -Wextra -Werror
DFLAGS	= -g

#------------------------------------------------------------------------------#
#				TEMPORARY FILE TO CHECK NORMINETTE   						   #
#------------------------------------------------------------------------------#
TEMP_PATH	= .temp

$(TEMP_PATH):
	mkdir -p $(TEMP_PATH)
	@echo "* $(YELLOW)Creating $(TEMP_PATH) folder:$(RESET) $(_SUCCESS)"

### Message Vars
_SUCCESS 		= [$(GREEN_BOLD)SUCCESS$(RESET)]
_INFO 			= [$(BLUE)INFO$(RESET)]
_NORM 			= [$(PURPLE)Norminette$(RESET)]
_NORM_INFO 		= $(BLUE)File no:$(RESET)
_NORM_SUCCESS 	= $(GREEN_BOLD)=== OK:$(RESET)
_NORM_ERR 		= $(RED_BOLD)=== KO:$(RESET)
_SEP 			= ================================================

#------------------------------------------------------------------------------#
#								COMMANDS    		  						   #
#------------------------------------------------------------------------------#

RM= rm -f

#------------------------------------------------------------------------------#
#								BASE		 		  						   #
#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME): $(OBJ_DIR)
	$(call success, "All files have been compiled ✅")
	$(call text, "Creating library $(NAME) [...]")
	@ar rcs $(NAME) $(OBJ_DIR)
	$(call success, "Build complete: $(NAME) 📚 ✨")

%.o: %.c 
	$(call warn, "Compiling [...] $<")
	@$(CC) $(CFLAGS) -c $< -o $@

#------------------------------------------------------------------------------#
#								CLEAN-UP RULES 		  						   #
#------------------------------------------------------------------------------#
#	clean the .o objects
clean:
	$(call text, "Removing object files [...]")
	@$(RM) $(OBJ_DIR)
	@$(RM) -rf $(TEMP_PATH)
	$(call success, "Object files cleaned. 💣"); \

fclean: clean
	$(call text, "Removing library file...")
	@$(RM) $(NAME)
	$(call success, "Library file cleaned. 💥")

re: fclean all
	$(call success, "All files have been recompiled ✅")

#------------------------------------------------------------------------------#
#								EXTRA		 		  						   #
#------------------------------------------------------------------------------#
#________ NORMINETTE ___________________________________________#
# Run norminette on all files

norm: $(TEMP_PATH)
	@printf "${_NORM}: $(BLUE)$(SRC_DIR)$(RESET)\n"
	@ls $(SRC_DIR) | wc -l > $(TEMP_PATH)/norm_ls.txt
	@printf "$(_NORM_INFO) $$(cat $(TEMP_PATH)/norm_ls.txt)\n"
	@printf "$(_NORM_SUCCESS) "
	@norminette $(SRC_DIR) > $(TEMP_PATH)/norm_output.txt; \
	count_ok=$$(grep -c "OK" $(TEMP_PATH)/norm_output.txt); \
	count_total=$$(cat $(TEMP_PATH)/norm_ls.txt); \
	count_ko=$$(grep -c "KO" $(TEMP_PATH)/norm_output.txt); \
	if [ $$count_ok -eq $$count_total ]; then \
		printf "$(GREEN_BOLD)[SUCCESS] All files passed Norminette! ✅$(RESET)\n"; \
	else \
		cat $(TEMP_PATH)/norm_output.txt | grep -v "OK" | sed 's/.*/$(RED_BOLD)&$(RESET)/'; \
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

RED_BOLD	  := $(shell echo "\033[1;31m")
GREEN_BOLD	:= $(shell echo "\033[1;32m")
PURPLE  := $(shell echo "\033[0;35m")
BLUE	 := $(shell echo "\033[0;34m")
CYAN	:= $(shell echo "\033[0;36m")
CYAN_BOLD	:= $(shell echo "\033[1;36m")
YELLOW	:= $(shell echo "\033[0;33m")
RESET	:= $(shell echo "\033[0m")

#________		FUNCTIONS TO PRINT COLORS______________________________________#

text = @echo "$(PURPLE)$(1)$(RESET)"
warn = @echo "$(BLUE)$(1)$(RESET)"
error = @echo "$(RED_BOLD)$(1)$(RESET)"
success = @echo "$(GREEN_BOLD)$(1)$(RESET)"
highligth = @echo "$(CYAN)$(1)$(RESET)"
highligth_bold = @echo "$(CYAN_BOLD)$(1)$(RESET)"


#______________________________________________________________________________#
.PHONY: all clean fclean re help
