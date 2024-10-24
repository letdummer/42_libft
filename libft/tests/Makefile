# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ../libft.a   # Caminho relativo para a libft.a na raiz
INCLUDES = ../includes

# Arquivos de teste
TEST_FILES = test_ft_strlen.c  # Adicione outros arquivos de teste aqui
OBJ_FILES = $(TEST_FILES:.c=.o)

# Executável de teste
TEST_EXEC = test_libft

# Compilar os arquivos de teste e linkar com a libft.a
all: $(TEST_EXEC)

$(TEST_EXEC): $(OBJ_FILES) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJ_FILES) -L.. -lft

# Compilar arquivos .c de teste
%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

# Compilar a biblioteca libft na raiz se não existir
$(LIBFT):
	make -C .. all

# Limpeza dos arquivos objeto e do executável de teste
clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(TEST_EXEC)

# Limpar tudo e recompilar a biblioteca também
re: fclean
	make -C .. re
	$(MAKE) all

.PHONY: all clean fclean re
