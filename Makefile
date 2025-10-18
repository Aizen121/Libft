SRCS = ft_strlen.c
OBJS = $(SRCS: .c = .o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc
INC = Includes
NAME = libft.a
LIBC = ar rcs
$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
$(OBJS): $(SRCS)
	$(cc) $(FLQGS) -c $(@: .o = .c) -o $(@) -I $(INC)
