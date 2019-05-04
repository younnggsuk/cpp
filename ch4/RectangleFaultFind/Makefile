CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = RectangleFaultFind.o Point.o Rectangle.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

RectangleFaultFind.o : Point.h Rectangle.h RectangleFaultFind.cpp
Point.o : Point.h Point.cpp
Rectangle.o : Rectangle.h Rectangle.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
