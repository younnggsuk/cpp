CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = Ex04_3_2.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

Ex04_3_2.o : Ex04_3_2.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
