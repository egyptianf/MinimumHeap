//
// Created by nerdo on 3/2/19.
//

#include "MinHeap.h"
#include <algorithm>
MinHeap::MinHeap() {
}

void MinHeap::insert(int element) {
    myArray.push_back(element);
    unsigned long index;
    index = myArray.size() - 1;

    //Check last added element with parents.
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
void MinHeap::print() {
    for(std::vector<int>::iterator it = myArray.begin(); it != myArray.end(); ++it)
        std::cout << *it << " ";
}

int MinHeap::getMinimum() {
    return myArray[0];
}