CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = HASComposite.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

HASComposite.o : HASComposite.cpp

clean : 
	rm -rf $(TARGET) $(OBJS)
