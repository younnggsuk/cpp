CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = Ex02_4_2.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

Ex02_4_2.o : Ex02_4_2.cpp

clean : 
	rm -rf $(TARGET) $(OBJS)
