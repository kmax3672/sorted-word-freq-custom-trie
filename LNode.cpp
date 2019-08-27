#include "LNode.h"
#include <string>

using namespace std;

LNode::LNode() {
    // FIXME
    // set data members to NULL values
        data = "";
        next = NULL;

}

LNode::LNode(string dataIn, LNode* nextIn) {
    // FIXME
    // initialize object state in the explicit value constructor
        data = dataIn;
        next = nextIn;

}

LNode* LNode::getNext() {
    // FIXME
        return next;

}

void LNode::setNext(LNode* nextIn) {
    next = nextIn;

}

string LNode::getData() {
    // FIXME
        return data;

}

void LNode::setData(string dataIn) {
    // FIXME
        data = dataIn;

}

LNode::~LNode() {

} 
