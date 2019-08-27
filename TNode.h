#ifndef TNODE_H__
#define TNODE_H__

#include <string>
#include "RageVector.h"

template<class T>
class RageVector;

class TNode{

	private:
		std::string currentWord;
		std::string nextLetters;
		RageVector<TNode>* children;
		int wordFreq;

	public:
		TNode();
		TNode(std::string nextLetters, RageVector<TNode>* children, std::string currentWord);
		~TNode();
		int getFreq();
		int setFreq(int freqCount);
		void display();
		void incFreq();

		std::string getWord();
		std::string setWord(std::string s);

		std::string getNexts();
		std::string setNexts(std::string s);

		RageVector<TNode>* getChildren();
		void setChildren(RageVector<TNode>* newChild);
		

};
#endif
