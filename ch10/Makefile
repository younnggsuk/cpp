CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = PointConsoleOutput.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

PointConsoleOutput.o : PointConsoleOutput.cpp	

clean : 
	rm -rf $(OBJS) $(TARGET)
