#include "LinkedList.h"
#include "LNode.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

LinkedList::LinkedList() {
	first = NULL;
}


LNode* LinkedList::getFirst(){
	return first;
}

void LinkedList::insertFirstNode(string sIn) {
        LNode *new_node = new LNode(sIn, NULL);

        if (first == NULL) {

                first = new_node;
        } 
	else {

		new_node->setNext(first);
		first=new_node;
           }

}

void LinkedList::removeFirstNode() {

        if (first == NULL)
             return;

        LNode *new_first = first->getNext();
        delete(first);
        first = new_first;
}




void LinkedList::display(int count)
{

	
	if(first==NULL){
		return;
	}
   LNode *current_node = first;
   while (current_node!= NULL) {
      current_node=current_node->getNext();
   }

} 


LinkedList::~LinkedList() {
   LNode *next_node;
   LNode *current_node = first;

   while (current_node != NULL) {
      next_node = current_node->getNext();
      delete(current_node);
      current_node = next_node;
   }

}


