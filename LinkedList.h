#ifndef LINKED_LIST_H__
#define LINKED_LIST_H__

#include <iostream>
#include <fstream>
#include <string>
#include "LNode.h"

class LinkedList {

 public:
  // empty constructor
  LinkedList();
	LNode* getFirst();
  void insertFirstNode(std::string sIn);
  void removeFirstNode();
  void display(int count);

  // destructor
  ~LinkedList();

 private:
  LNode* first;
  // internal method used by displayList
  //void displayString(string s);

};

#endif // LINKED_LIST_H__ 
