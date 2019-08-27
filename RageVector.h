#ifndef RAGEVECTOR_H__
#define RAGEVECTOR_H__

#include <string>
#include "TNode.h"

class TNode;

template <class T>
class RageVector{

	private:
		int size;
		T** data;
		

	public:
		RageVector();
		RageVector(T** dataIn, int sizeIn);
		~RageVector();
		void reealloc(RageVector<T> *f);
		void resize(RageVector<T> *f, int newSize);
		void dispVec();
		int getSize();
		T** getData();
		void setData(int size);
		
		


};

#include "RageVector.cc"
#endif
