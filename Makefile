# **************************************************************************** #
#                                   LIBFT                                      #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC = $(shell find . -name "*.c")
OBJ = $(SRC:.c=.o)

# --------------------------------- RULES ------------------------------------ #

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# Optional: avoids errors if these names are used as files
.PHONY: all clean fclean re
