CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = main.o\
	   Point.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

main.o : main.cpp\
		 Point.h\
		 TemplateSmartPointer.h

Point.o : Point.cpp\
		  Point.h

clean :
	rm -rf $(TARGET) $(OBJS)
