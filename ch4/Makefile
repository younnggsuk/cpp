CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = SelfRef.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

SelfRef.o : SelfRef.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
