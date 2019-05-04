CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = ConvToPrimitive.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

ConvToPrimitive.o : ConvToPrimitive.cpp

clean : 
	rm -rf $(TARGET) $(OBJS)
