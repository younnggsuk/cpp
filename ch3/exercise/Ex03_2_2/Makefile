CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = Ex03_2_2.o Class.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

Ex03_2_2.o : Class.h Ex03_2_2.cpp
Class.o : Class.h Class.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
