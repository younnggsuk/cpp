CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = main.o\
	   PointClassTemplateFuncDef.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

main.o : main.cpp PointClassTemplateFuncDef.h
PointClassTemplateFuncDef.o : PointClassTemplateFuncDef.cpp PointClassTemplateFuncDef.h

clean :
	rm -rf $(TARGET) $(OBJS)
