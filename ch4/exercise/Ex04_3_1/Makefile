CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = Ex04_3_1.o Point.o Circle.o Ring.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

Ex04_3_1.o : Ring.h Ex04_3_1.cpp
Ring.o : Ring.h Ring.cpp
Circle.o : Circle.h Circle.cpp
Point.o : Point.h Point.cpp

clean : 
	rm -rf $(TARGET) $(OBJS)
