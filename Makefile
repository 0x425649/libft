CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = .
INCDIR = .

SOURCES = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strdup.c \
			ft_bzero.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_split.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
OBJECTS = $(SOURCES:.c=.o)

BSOURCES = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstadd_front \
			ft_lstsize.c \
 			ft_lstlast \
# 			ft_lstadd_back \
# 			ft_lstdelone \
# 			ft_lstclear \
# 			ft_lstiter \
# 			ft_lstmap
BOBJECTS = $(BSOURCES:.c=.o)

TARGET = libft.a
all: $(TARGET)
	
$(TARGET): $(OBJECTS)
	ar crs $@ $(OBJECTS)

bonus: $(BOBJECTS)
	ar crs $@ $(BOBJECTS)

# add header file dependency?
$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all