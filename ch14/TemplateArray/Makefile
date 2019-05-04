CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = main.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

clean :
	rm -rf $(TARGET) $(OBJS)

main.o : main.cpp ArrayTemplate.h PointTemplate.h
