NAME = libft_tests

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include -I ../libft/include
RM = rm -f
CPPFLAGS = -MMD

TEST_SRC = $(wildcard tests/*_test.c) main.c
TEST_OBJ = $(TEST_SRC:.c=.o)
DEPS = $(TEST_OBJ:.o=.d)


LIBFT_PATH = ./libft
LIBFT_SRC = $(wildcard $(LIBFT_PATH)/*.c)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)
LIBFT_LIB = $(LIBFT_PATH)/libft.a



all: $(NAME)

$(NAME): $(TEST_OBJ) $(LIBFT_OBJ)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(TEST_OBJ) $(LIBFT_LIB)
	
$(LIBFT_LIB): $(LIBFT_OBJ)
	@if [ -d "$(LIBFT_PATH)" ]; then \
		echo "🔨 Creating libft.a..."; \
		ar rcs $@ $^; \
	else \
		echo "🚨 Error: LIBFT_PATH $(LIBFT_PATH) does not exist."; \
		exit 1; \
	fi

# Regra para compilar objetos da libft
$(LIBFT_OBJ): $(LIBFT_PATH)/%.o: $(LIBFT_PATH)/%.c
	@if [ -d "$(LIBFT_PATH)" ]; then \
		echo "🔨 Compiling libft object files..."; \
		$(CC) $(CFLAGS) -c $< -o $@; \
	else \
		echo "🚨 Error: LIBFT_PATH $(LIBFT_PATH) does not exist."; \
		exit 1; \
	fi

-include $(DEPS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(TEST_OBJ)
	$(RM) $(LIBFT_OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT_OBJ)

re: fclean
	@$(MAKE) --no-print-directory fclean all

.PHONY: all clean fclean re
