
################## Compilation ##################
CC= cc
CFLAGS= -Wall -Wextra -Werror

################### Commands ###################
RM= rm -f

#################### Files #####################
NAME= libft.a
OBJ= $(SRC:.c=.o)
INCLUDES= -I.
H_FILES = $(wildcard *.h)

SRC= ft_atoi.c 		ft_bzero.c		ft_calloc.c		ft_isalnum.c \
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

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "Creating library archive: $(NAME)"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

################ Clean-up Rules ################
clean:
	$(RM) $(OBJ)
	@echo "Object files cleaned."

fclean: clean
	$(RM) $(NAME)
	@echo "Library file cleaned."

re: fclean all
	@echo "Cleaning and re-compiling [...]"

.PHONY: all clean fclean re
