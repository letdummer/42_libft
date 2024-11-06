#ifndef ANSI_COLORS_H
# define ANSI_COLORS_H

# define RESET "\033[0m"
# define GREEN "\033[0;32m"


// Definindo as cores ANSI
# define RED     := $(shell echo -e "\033[1;31m")
# define GREEN   := $(shell echo -e "\033[1;32m")
# define PURPLE  := $(shell echo -e "\033[0;35m")
# define BLUE    := $(shell echo -e "\033[0;34m")
# define RESET   := $(shell echo -e "\033[0m")

// Funções para imprimir texto com cores
# define text = @echo "$(PURPLE)$(1)$(RESET)"
# define warn = @echo "$(BLUE)$(1)$(RESET)"
# define error = @echo "$(RED)$(1)$(RESET)"
# define success = @echo "$(GREEN)$(1)$(RESET)"
#endif