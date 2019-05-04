CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = ReferenceAttribute.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

ReferenceAttribute.o : ReferenceAttribute.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
