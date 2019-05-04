CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = BankingSystem.o AccountHandler.o AccountClass.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

BankingSystem.o : BankingSystem.cpp AccountHandler.h
AccountHandler.o : AccountHandler.cpp AccountHandler.h
AccountClass.o : AccountClass.cpp AccountClass.h

clean : 
	rm -rf $(TARGET) $(OBJS)
