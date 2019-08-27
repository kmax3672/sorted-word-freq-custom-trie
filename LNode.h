#ifndef LNODE_H__
#define LNODE_H__

#include <string>

class LNode {

 private:
    std::string data;
    LNode* next;

 public:
    LNode();
    LNode(std::string dataIn, LNode* nextIn);
    LNode *getNext();
    void setNext(LNode* nextIn);
    std::string getData();
    void setData(std::string dataIn);
    ~LNode();

};

#endif // LNODE_H__ 
