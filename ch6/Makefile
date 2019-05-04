CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = ConstStaticMember.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

ConstStaticMember.o : ConstStaticMember.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
