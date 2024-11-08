# Definindo as cores ANSI
RED     := $(shell echo -e "\033[1;31m")
GREEN   := $(shell echo -e "\033[1;32m")
PURPLE  := $(shell echo -e "\033[0;35m")
BLUE    := $(shell echo -e "\033[0;34m")
RESET   := $(shell echo -e "\033[0m")

# Funções para imprimir texto com cores
text = @echo "$(PURPLE)$(1)$(RESET)"
warn = @echo "$(BLUE)$(1)$(RESET)"
error = @echo "$(RED)$(1)$(RESET)"
success = @echo "$(GREEN)$(1)$(RESET)"

####################### Files ######################
NAME = libft_tests

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./include
RM = rm -f

TEST_SRC = $(wildcard tests/*_test.c) main.c
TEST_OBJ = $(TEST_SRC:.c=.o)
DEPS = $(TEST_OBJ:.o=.d)

TEST_SRC = $(wildcard tests/*_test.c) main.c
TEST_OBJ = $(TEST_SRC:.c=.o)
DEPS = $(TEST_OBJ:.o=.d)

LIBFT_PATH = ../libft
LIBFT_SRC = $(wildcard $(LIBFT_PATH)/*.c)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)
LIBFT_LIB = $(LIBFT_PATH)/libft.a


all: $(NAME)

$(NAME): $(TEST_OBJ) $(LIBFT_LIB)
	$(call success, "All files have been compiled ✅")
	$(call text, "Creating $(NAME) [...]")
	@$(CC) $(CFLAGS) -o $(NAME) $(TEST_OBJ) $(LIBFT_LIB)
	$(call success, "Build complete: $(NAME) ✅ ✨")

# Regra para compilar objetos da libft
$(LIBFT_LIB): $(LIBFT_OBJ)
	$(call text, "🔨 Compiling libft [...]")
	@$(MAKE) -C $(LIBFT_PATH)
	$(call text, "Checking if libft.a has been created [...]")

-include $(DEPS)

%.o: %.c
	$(call warn, "Compiling [...] $<")
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@$(RM) $(TEST_OBJ)
	@$(RM) $(LIBFT_OBJ)
	$(call success, "Object files cleaned. ✨");

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT_LIB)
	$(call success, "Library file cleaned. ✨")

re: fclean
	@$(MAKE) --no-print-directory fclean all
	$(call success, "All files have been recompiled ✅")

.PHONY: all clean fclean re
