CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = main.o Point.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

clean :
	rm -rf $(TARGET) $(OBJS)

main.o : main.cpp Point.h TemplateArray.h
Point.o : Point.cpp Point.h


