#include "TNode.h"

TNode::TNode(){
	nextLetters="";
	children=new RageVector<TNode>;
	currentWord="";
	wordFreq=0;
}

TNode::TNode(string nextLettersIn,RageVector<TNode>* childrenIn, string currentWordIn){
	nextLetters = nextLettersIn;
	children = childrenIn;
	currentWord = currentWordIn;
	wordFreq=0;

}

int TNode::getFreq(){
	return wordFreq;
}

void TNode::display(){

}

void TNode::incFreq(){
	++wordFreq;

}



string TNode::getWord(){
	return currentWord;
}

string TNode::setWord(string wordIn){
	currentWord = wordIn;
	return currentWord;
}

string TNode::getNexts(){
	return nextLetters;
}

string TNode::setNexts(string nextsIn){
	nextLetters = nextsIn;
	return nextLetters;

}

RageVector<TNode>* TNode::getChildren(){
	return children;
}

void TNode::setChildren(RageVector<TNode>* newChild){
	children=newChild;
}

TNode::~TNode(){
}
