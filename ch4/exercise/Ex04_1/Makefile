CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = FruitSaleSim1.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

FruitSaleSim1.o : FruitSaleSim1.cpp

clean :
	rm -rf $(TARGET) $(OBJS)
