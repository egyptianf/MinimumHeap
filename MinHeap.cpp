//
// Created by nerdo on 3/2/19.
//

#include "MinHeap.h"
#include <algorithm>
MinHeap::MinHeap()=default;

void MinHeap::heapify() {
    unsigned long index;
    index = myArray.size() - 1;
    while ((index + 1) > 0 && index != 0 ) {
        if (index % 2 == 0 ) {
            if (myArray[index] < myArray[(index / 2) - 1]) {
                std::swap(myArray[index], myArray[(index / 2) - 1]);
                index = (index/2) -1;
            }
            else
                break;
        } else {
            if (myArray[index] < myArray[index / 2]) {
                std::swap(myArray[index], myArray[index / 2]);
                index = index/2;
            }
            else
                break;
        }


    }

}
void MinHeap::insert(int element) {
    myArray.push_back(element);
    heapify();
}

void MinHeap::print() {
    for(auto element: myArray)
        std::cout << element << " ";
}

int MinHeap::getMinimum() {
    return myArray[0];
}

int MinHeap::pop() {
    int min = getMinimum();
    myArray[0] = myArray[myArray.size()-1];
    myArray.erase(myArray.end()-1);

    int i = 0;
    int leftChild, rightChild;
    do
    {
         leftChild = (2*i) + 1;

         if(leftChild > myArray.size())
             break;
        rightChild = leftChild + 1;
        //Compare with right and left children
        bool leftIsSmaller = myArray[leftChild] <= myArray[rightChild];
        if(myArray[leftChild] < myArray[i] && leftIsSmaller) {
            std::swap(myArray[leftChild], myArray[i]);
            i = leftChild;
        }
        else if (myArray[rightChild] < myArray[i] && !leftIsSmaller){
            std::swap(myArray[rightChild], myArray[i]);
            i = rightChild;
        }
        else
            break;
    }while(leftChild < myArray.size());
    return min;
}

unsigned long MinHeap::size() {
    return myArray.size();
}

bool MinHeap::isEmpty() {
    return myArray.empty();
}