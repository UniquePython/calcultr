CC      = gcc
CFLAGS  = -Wall -Wextra -Wshadow -Wformat=2 -Wundef -Wconversion -std=c2x -I include
LIBS    = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

SRC_DIR   = src
BUILD_DIR = build

SRCS   = $(shell find $(SRC_DIR) -name '*.c')
OBJS   = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))
TARGET = $(BUILD_DIR)/calcultr

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(TARGET)

clean:
	rm -f $(BUILD_DIR)/*.o $(TARGET)
