NAME = libft.a
SRCDIR = ./
INCLUDESDIR = ./
CC = gcc
SRCS = $(SRCDIR)ft_atoi.c $(SRCDIR)ft_bzero.c $(SRCDIR)ft_calloc.c $(SRCDIR)ft_isalnum.c $(SRCDIR)ft_isalpha.c \
		$(SRCDIR)ft_isascii.c $(SRCDIR)ft_isdigit.c $(SRCDIR)ft_isprint.c $(SRCDIR)ft_memchr.c $(SRCDIR)ft_memcmp.c \
		$(SRCDIR)ft_memcpy.c $(SRCDIR)ft_memmove.c $(SRCDIR)ft_memset.c $(SRCDIR)ft_strchr.c $(SRCDIR)ft_strdup.c \
		$(SRCDIR)ft_strl.c $(SRCDIR)ft_strlen.c $(SRCDIR)ft_strncmp.c $(SRCDIR)ft_strnstr.c $(SRCDIR)ft_strtrim.c \
		$(SRCDIR)ft_to.c $(SRCDIR)ft_substr.c $(SRCDIR)ft_strjoin.c $(SRCDIR)ft_itoa.c 
OBJS = $(SRCS:.c=.o)

.c.o: 
	$(CC) -Wall -Wextra -Werror -c $< -o $(<:.c=.o) -I $(INCLUDESDIR)

all: 		$(NAME)

$(NAME): 	$(OBJS)
	ar rc $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)

re:			fclean all
