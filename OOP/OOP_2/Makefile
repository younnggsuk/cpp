CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = BankingSystem.o BankingSystemFunc.o AccountClass.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

BankingSystem.o : BankingSystem.cpp BankingSystemFunc.h
BankingSystemFunc.o : BankingSystemFunc.cpp BankingSystemFunc.h
AccountClass.o : AccountClass.cpp AccountClass.h

clean : 
	rm -rf $(TARGET) $(OBJS)
