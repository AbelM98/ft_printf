# PATHS && NAMES
NAME		= libftprintf.a

# SRCS && OBJS
SRCS		= ft_printf.c \
			ft_aux_alpha.c \
			ft_aux_nb.c \
			ft_aux_ptr.c
			
OBJS		= $(SRCS:.c=.o)

# COMPILER
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

# TARGETS
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
