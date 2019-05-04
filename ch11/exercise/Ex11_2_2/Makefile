CC = g++
CPPFLAGS = -g -Wall -W
TARGET = test
OBJS = main.o

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

main.o : main.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
