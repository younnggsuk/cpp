CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = BankingSystem.o BankingSystemFunc.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

BankingSystem.o : BankingSystem.cpp BankingSystemFunc.h
BankingSystemFunc.o : BankingSystemFunc.cpp BankingSystemFunc.h

clean : 
	rm -rf $(TARGET) $(OBJS)
