CC = g++
CPPFLAGS = -g -W -Wall
TARGET = test
OBJS = StringClass.o\
	   BankingSystem.o\
	   AccountHandler.o\
	   AccountClass.o\
	   NormalAccountClass.o\
	   HighCreditAccountClass.o\
	   BoundCheckAccountPtrArray.o

$(TARGET) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(TARGET) $(OBJS)

clean : 
	rm -rf $(TARGET) $(OBJS)

StringClass.o : StringClass.cpp StringClass.h
BankingSystem.o : BankingSystem.cpp AccountHandler.h
AccountHandler.o : AccountHandler.cpp AccountHandler.h
AccountClass.o : AccountClass.cpp AccountClass.h
NormalAccountClass.o : NormalAccountClass.cpp NormalAccountClass.h
HighCreditAccountClass.o : HighCreditAccountClass.cpp HighCreditAccountClass.h
BoundCheckAccountPtrArray.o : BoundCheckAccountPtrArray.cpp BoundCheckAccountPtrArray.h

