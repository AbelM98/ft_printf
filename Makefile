# PATHS && NAMES
NAME		= libftprintf.a

# SRCS && OBJS
SRCS		= ft_printf.c \
			ft_aux_alpha.c \
			ft_aux_nb.c
OBJS		= $(SRCS:.c=.o)

# COMPILER
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I./includes 
AR			= ar rcs
RM			= rm -f

# TARGETS
all: $(NAME)

$(NAME): $(OBJS)
#	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@make -C  clean

fclean: clean
	$(RM) $(NAME)
	$(RM) fclean

re: fclean all

.PHONY: all clean fclean re
