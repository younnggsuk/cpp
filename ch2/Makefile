CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = StdCPPFunc.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

StdCPPFunc.o : StdCPPFunc.cpp

clean :
	rm -rf $(TARGET) $(OBJS)

