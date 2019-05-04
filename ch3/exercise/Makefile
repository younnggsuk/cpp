CC = g++
GCCFLAGS = -g -W -Wall
TARGET = test
OBJS = Ex03_1.o

$(TARGET) : $(OBJS)
	$(CC) $(GCCFLAGS) -o $(TARGET) $(OBJS)

Ex03_1.o : Ex03_1.cpp

clean : 
	rm -rf $(TARGET) $(OBJS)

