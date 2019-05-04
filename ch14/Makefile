CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = ClassTemplateStaticMem.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

clean :
	rm -rf $(TARGET) $(OBJS)

ClassTemplateStaticMem.o : ClassTemplateStaticMem.cpp
