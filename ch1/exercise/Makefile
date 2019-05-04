CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = Ex01_3_1.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

Ex01_3_1.o : Ex01_3_1.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
