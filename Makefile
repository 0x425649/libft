CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = .
INCDIR = .

TARGET = libft.a
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)
	
$(TARGET): $(OBJECTS)
	ar crs $@ $(OBJECTS)

# add header file dependency?
$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all