#include "Trie.h"
#include <string>
#include "TNode.h"
#include "RageVector.h"
#include "LinkedList.h"


Trie::Trie(){
	root=NULL;

}

TNode* Trie::getRoot(){
	return root;

}

void Trie::setRoot(TNode* newRoot){
	root = newRoot;
}

void Trie::addWord(string s,int pos, TNode* subRoot){
	TNode* current = subRoot;
	int index = 0;
		if(s.length() == 0){
		return;
		}
				
	if(subRoot->getWord()==s){
								
		subRoot->incFreq();
		return;
	}
	else{
			
		index=subRoot->getNexts().find(s.substr(pos,1));		
			
		if(index<0){
			
			
			
			TNode *newNode = new TNode();
			

			if(subRoot->getNexts().length()>subRoot->getChildren()->getSize()){
				RageVector<TNode> *replacement=new RageVector<TNode>;
				replacement->reealloc(subRoot->getChildren());
				subRoot->setChildren(replacement);
				
				
			}


			subRoot->getChildren()->getData()[subRoot->getNexts().length()] = newNode;  
			


			
			subRoot->setNexts(subRoot->getNexts().append((s.substr(pos,1))));
			

			string prevStr=subRoot->getWord();			

			subRoot = subRoot->getChildren()->getData()[subRoot->getNexts().find(s.substr(pos,1))];
	
			subRoot->setWord(prevStr.append(s.substr(pos,1)));
			

			pos++;					
			addWord(s, pos, subRoot);	
			
						
		}
		else{
			subRoot = subRoot->getChildren()->getData()[subRoot->getNexts().find(s.substr(pos,1))];
			addWord(s, pos+1, subRoot);
		}

		
	}

}

void Trie::freakOut(TNode* root, RageVector<LinkedList>* freqArr){
	TNode* temp=root;

	if(temp==NULL){
		return;
	}
	int i=0;
	int size=freqArr->getSize();
	int freq=temp->getFreq();  
	string tempString=temp->getWord();
	RageVector<TNode>* tempChild=temp->getChildren();

	if(freq>0){
		if(size<freq){


			freqArr->resize(freqArr,freq+1);
			
		}
		
			freqArr->getData()[freq]->insertFirstNode(tempString); 
			
	}

	for(i;i<tempChild->getSize();i++){	
			
		TNode* toNext=tempChild->getData()[i];
		if(toNext!=NULL){
		freakOut(tempChild->getData()[i], freqArr);
		}
	}
	return;
	

}




void Trie::truncate_node(TNode* n)
{
    for(int i=0;i<26;i++)
    {
        if(n->getChildren()->getData()[i] != NULL)
        {
            truncate_node(n->getChildren()->getData()[i]);
        }
    }
    delete n;
}

Trie::~Trie(){
    truncate_node(root);
}
 




