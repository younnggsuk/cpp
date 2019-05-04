CC = g++
GCCFLAGS = -g -W -Wall
TARGET = test
OBJS = Ex03_2_1.o Class.o

$(TARGET) : $(OBJS)
	$(CC) $(GCCFLAGS) -o $(TARGET) $(OBJS)

Ex03_2_1.o : Class.h Ex03_2_1.cpp
Class.o : Class.h Class.cpp

clean : 
	rm -rf $(TARGET) $(OBJS)

