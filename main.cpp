#include <iostream>
#include "MinHeap.h"
int main() {
    MinHeap* minheap = new MinHeap();
    minheap->insert(10);
    minheap->insert(70);
    minheap->insert(50);
    minheap->insert(60);
    minheap->insert(20);
    minheap->insert(90);
    minheap->insert(5);
    minheap->insert(3);

    minheap->print();


    std::cout << "Hello, World!" << std::endl;


    delete minheap;
    return 0;
}