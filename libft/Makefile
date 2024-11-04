#################### Files #####################
NAME= libft.a

SRC_DIR = $(wildcard *.c)
OBJ_DIR = $(SRC_DIR:.c=.o)
H_FILES = $(wildcard *.h)
INCLUDES = -I.

################## Compilation ##################
CC= cc
CFLAGS= -Wall -Wextra -Werror

################### Commands ###################
RM= rm -f

#SRC= ft_atoi.c 		ft_bzero.c		ft_calloc.c		ft_isalnum.c \
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
	@echo "Build complete: $(NAME)"

$(NAME): $(OBJ_DIR)
	ar rcs $(NAME) $(OBJ_DIR)
	@echo "Creating library archive: $(NAME)"

%.o: %.c $(H_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

################ Clean-up Rules ################
clean:
	$(RM) $(OBJ_DIR)
	@echo "Object files cleaned."

fclean: clean
	$(RM) $(NAME)
	@echo "Library file cleaned."

re: fclean all
	@echo "Cleaning and re-compiling [...]"

.PHONY: all clean fclean re
