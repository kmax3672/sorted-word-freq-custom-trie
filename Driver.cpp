#include "RageVector.h"
#include "TNode.h"
#include "Trie.h"
#include <fstream>
#include <string>
//#include <sstream>
#include <iostream>
#include <sys/time.h>
#include "LinkedList.h"
#include "LNode.h"

using namespace std;


int main(){

	struct timeval start, finish;

	int NO_OF_REPS=1000;

	ofstream outFile;
	outFile.open("Frequencies.txt");

	gettimeofday(&start,NULL);

	
	int i=0;
	for(i;i<NO_OF_REPS;i++){
		Trie* trie = new Trie;

	TNode* blankRoot=new TNode;
	trie->setRoot(blankRoot);

        ifstream inFile;
        inFile.open("inputF.txt");


        string currentLine;
 
        string tempStr;
	bool fileOver=false;
	string lastWord="";
	int final=0;
	string X;

        if(!inFile){
		cout<<"Unable to open file" <<endl;
		exit(1);
	}
	while(inFile >> X){
		trie->addWord(X,0,trie->getRoot());
	}
	inFile.close();


	RageVector<LinkedList>* wilson = new RageVector<LinkedList>;
	wilson->setData(wilson->getSize());
		
	trie->freakOut(trie->getRoot(), wilson); 
	
	int k=wilson->getSize()-1;
	

	for(k;k>=0;k--){

	if(wilson->getData()[k]->getFirst()==NULL){
		continue;
	}
	outFile << "These Words have a frequency of : " << k << endl;
   LNode *current_node = wilson->getData()[k]->getFirst();
   while (current_node!= NULL) {
     outFile << current_node->getData() << endl;
      current_node=current_node->getNext();
   }
   outFile << endl;
	}

	
	}

	gettimeofday(&finish,NULL);
	double totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)NO_OF_REPS;

    cout << "Total time: " << totalTime << " micro seconds" << endl;

	outFile.close();
}

