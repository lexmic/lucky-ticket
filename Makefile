SRC := TheLuckyTickets.c 
TARGET := bin/ticket
CC := gcc
CFLAGS := -Wall -o 
all: 
	$(CC) $(CFLAGS) $(TARGET) $(SRC)
