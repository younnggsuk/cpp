CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = PointClassTemplateFuncDef.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

PointClassTemplateFuncDef.o : PointClassTemplateFuncDef.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
