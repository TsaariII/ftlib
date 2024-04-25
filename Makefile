NAME	= libft.a

SRC		= ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_split.c\
		ft_strdup.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_tolower.c\
		ft_toupper.c

#BONUS_SRCS	=

OBJS	= $(SRC:.c=.o)

HEAD	= ./libft.h

AR		= ar rcs

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

.c.o:
		$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@
$(NAME):	$(OBJS)
				$(AR) $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)

fclen:	clean
			rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re bonus