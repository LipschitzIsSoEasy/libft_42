# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRCS =	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\

OBJS = $(SRCS:.c=.o)


# Default rule
all: $(NAME)

# Create the library
$(NAME): $(OBJS)
	ar rcs $@ $^

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

# Clean object files
clean:
	rm -rf *.o

# Clean object files and library
fclean: clean
	rm -f $(NAME)

# Rebuild the library
re: fclean all

# Rules
.PHONY: all clean fclean re