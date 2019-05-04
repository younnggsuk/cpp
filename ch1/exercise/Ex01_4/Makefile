CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = main.o func.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

main.o : main.cpp func.h
func.o : main.cpp func.h

clean : 
	rm -rf $(TARGET) $(OBJS)
