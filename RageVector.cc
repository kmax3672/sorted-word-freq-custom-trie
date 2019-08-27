#include "RageVector.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
RageVector<T>::RageVector(){
        data = new T*[100];
        size=100;

}

template<class T>
RageVector<T>::RageVector(T** dataIn, int sizeIn){
	data = dataIn;
	size = sizeIn;
}

template <class T>
int RageVector<T>::getSize(){
        return size;

}

template <class T>
void RageVector<T>::reealloc(RageVector<T> *f){
	size=f->size;
	size*=2;
	data = new T*[size];
	int m=0;
	for(m;m<f->size;m++){
		data[m]=f->data[m];
	}
	for(m+1;m<size;m++){
		data[m]=new T;
	}


}

template<class T>
void RageVector<T>::resize(RageVector<T> *f, int newSize){
	size=newSize;
	data = new T*[size];
	int m=0;
	
	for(m;m<f->size;m++){
		data[m]=f->data[m];
	}
	for(m+1;m<size;m++){
		data[m]=new T;
	}
	
}


template<class T>
void RageVector<T>::dispVec(){ //doesnt get called
	int i=0;
	for( i; i<size; i++){
		if(data[i]!=NULL){
		data[i]->display();
		}
	}
}

template<class T>
T** RageVector<T>::getData(){
	return data;
}

template<class T>
void RageVector<T>::setData(int size){
	int i=0;
	for(i;i<size;i++){
		
		data[i]=new T;
	}
}

template <class T>
RageVector<T>::~RageVector() {

} 
