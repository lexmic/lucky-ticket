SRC := TheLuckyTickets.c ldrlib.c
LIBS := ldrlib.h
TARGET := bin/ticket
CC := gcc
CFLAGS := -Wall -o 
all: $(SRC) $(LIBS)
	$(CC) $(CFLAGS) $(TARGET) $(SRC)
