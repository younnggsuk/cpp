CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = DynamicBadCastRef.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

clean :
	rm -rf $(TARGET) $(OBJS)

DynamicBadCastRef.o : DynamicBadCastRef.cpp
