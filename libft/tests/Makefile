# Caminhos das pastas
SRC_DIR = ..
BIN_DIR = bin

# Lista de arquivos fonte da biblioteca e arquivos de teste
SRCS = $(SRC_DIR)/ft_itoa.c $(SRC_DIR)/ft_other1.c $(SRC_DIR)/ft_other2.c  # Adicione todos os arquivos .c da libft aqui
TESTS = ft_itoa_test.c ft_other1_test.c # Adicione todos os arquivos de teste aqui

# Nome dos executáveis correspondentes a cada arquivo de teste
TEST_BINS = $(BIN_DIR)/ft_itoa_test $(BIN_DIR)/ft_other1_test # Lista de executáveis

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Regra padrão para compilar todos os testes
all: $(BIN_DIR) $(TEST_BINS)

# Cria a pasta bin se não existir
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Regras específicas para compilar cada teste individualmente
$(BIN_DIR)/ft_itoa_test: ft_itoa_test.c $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

$(BIN_DIR)/ft_other1_test: ft_other1_test.c $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

# Limpeza dos executáveis de teste
clean:
	rm -rf $(BIN_DIR)

# Executa todos os testes
test: all
	@for test in $(TEST_BINS); do \
		echo "Running $$test..."; \
		./$$test; \
	done

.PHONY: all clean test
