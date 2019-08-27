GXX=g++ -O3

all: wordFreak.exe

wordFreak.exe: TNode.o Driver.o LinkedList.o LNode.o Trie.o
	$(GXX) TNode.o Driver.o LinkedList.o LNode.o Trie.o -o wordFreak.exe

Driver.o: Driver.cpp
	$(GXX) -c Driver.cpp

TNode.o: TNode.cpp RageVector.cc RageVector.h
	$(GXX) -c TNode.cpp

LinkedList.o: LinkedList.cpp
	$(GXX) -c LinkedList.cpp

LNode.o: LNode.cpp
	$(GXX) -c LNode.cpp

Trie.o: Trie.cpp RageVector.cc RageVector.h
	$(GXX) -c Trie.cpp

clean:
	rm -f *.o *~ core wordFreak.exe
