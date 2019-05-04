CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = StringClass.o

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

StringClass.o : StringClass.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
