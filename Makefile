# Define the target and output executable name
TARGET = video_poker

# Get a list of all .c files in the working directory
SRCS = $(wildcard *.c)

# Generate a list of object files by replacing .c with .o
OBJS = $(SRCS:.c=.o)

# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -O2

# Linker flags
LDFLAGS =

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

# Rule to build object files from source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)




