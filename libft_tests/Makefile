NAME = libft_tests

TEST_SRC = $(wildcard tests/*_test.c) main.c
TEST_OBJ = $(TEST_SRC:.c=.o)
DEPS = $(TEST_OBJ:.o=.d)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I../include
INCLUDES = -I ./include
# '-I' specifies a directory to search.
RM = rm -rf
CPPFLAGS = -MMD

LIBFT_PATH ?= $(shell pwd)
# '?=' set the variable only if it's not set/doesn't have a value.
# '$(shell)' function calls out to the sell to execute a command.
# so using pwd is like ran it in the bash shell prompt.
# '$(shell pwd)' will return the current working directory.
LIBFT_LIB   = $(LIBFT_PATH)/libft.a



all: $(NAME)

$(NAME): $(TEST_OBJ) 
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(TEST_OBJ) $(LIBFT_LIB) $(INCLUDES)
	@$(MAKE) fclean -C $(LIBFT_PATH)
	
-include $(DEPS)

$(LIBFT_LIB):
	@if [ -d "$(LIBFT_PATH)" ]; then \
		echo "$(CYAN)📦 Building libft library at $(LIBFT_PATH)...$(RESET)"; \
		$(MAKE) -C $(LIBFT_PATH); \
	else \
		echo "$(MAGENTA)Error: LIBFT_PATH $(LIBFT_PATH) does not exist.$(RESET)"; \
		exit 1; \
	fi

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean: $(RM) $(TEST_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	@$(MAKE) --no-print-directory fclean all

.PHONY: all clean fclean re
