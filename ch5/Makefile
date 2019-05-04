CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = ReturnObjDeadTime.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

ReturnObjDeadTime.o : ReturnObjDeadTime.cpp 

clean : 
	rm -rf $(TARGET) $(OBJS)
