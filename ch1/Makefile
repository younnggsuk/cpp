CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = NameAlias.o 

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

NameAlias.o : NameAlias.cpp

clean :
	rm -rf $(TARGET) $(OBJS)

