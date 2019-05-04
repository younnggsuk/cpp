CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = Ex05_1.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

Ex05_1.o : Ex05_1.cpp 

clean : 
	rm -rf $(TARGET) $(OBJS)
