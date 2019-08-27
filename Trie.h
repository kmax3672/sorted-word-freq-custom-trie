#ifndef Trie_H__
#define Trie_H__

#include "TNode.h"
#include "RageVector.h"
#include <string>
#include "LinkedList.h"

class Trie{

	private:
		TNode* root;
		
	public:
		Trie();
		TNode* getRoot();
		~Trie();
		void setRoot(TNode* newRoot);
		void addWord(std::string s, int pos, TNode* subRoot);
		void freakOut(TNode* root, RageVector<LinkedList>* freqArr);
		void truncate_node(TNode* n);


};

#endif
