CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = MultiInheri3.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

MultiInheri3.o : MultiInheri3.cpp

clean : 
	rm -rf $(TARGET) $(OBJS)

