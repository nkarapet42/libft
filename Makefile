NAME = libft.a

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = Mandatory/ft_isalpha.c Mandatory/ft_isdigit.c Mandatory/ft_isalnum.c Mandatory/ft_isascii.c \
       Mandatory/ft_isprint.c Mandatory/ft_strlen.c Mandatory/ft_memset.c Mandatory/ft_bzero.c \
       Mandatory/ft_memcpy.c Mandatory/ft_memmove.c Mandatory/ft_strlcpy.c Mandatory/ft_strlcat.c \
       Mandatory/ft_toupper.c Mandatory/ft_tolower.c Mandatory/ft_strchr.c Mandatory/ft_strrchr.c \
       Mandatory/ft_strncmp.c Mandatory/ft_memchr.c Mandatory/ft_memcmp.c Mandatory/ft_strnstr.c \
       Mandatory/ft_atoi.c Mandatory/ft_calloc.c Mandatory/ft_strdup.c Mandatory/ft_substr.c \
       Mandatory/ft_strjoin.c Mandatory/ft_strtrim.c Mandatory/ft_split.c Mandatory/ft_itoa.c \
       Mandatory/ft_strmapi.c Mandatory/ft_striteri.c Mandatory/ft_putchar_fd.c Mandatory/ft_putnbr_fd.c \
       Mandatory/ft_putendl_fd.c Mandatory/ft_putstr_fd.c

BONUS_SRCS = Bonus/ft_lstnew.c Bonus/ft_lstadd_front.c \
             Bonus/ft_lstsize.c Bonus/ft_lstlast.c Bonus/ft_lstadd_back.c Bonus/ft_lstdelone.c \
             Bonus/ft_lstclear.c Bonus/ft_lstiter.c Bonus/ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c Makefile Includes/libft.h
	$(GCC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJS) $(OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
