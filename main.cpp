#include <iostream>
#include "MinHeap.h"
int main() {
    auto* minheap = new MinHeap();
    minheap->insert(10);
    minheap->insert(70);
    minheap->insert(50);
    minheap->insert(0);
    minheap->insert(20);
    minheap->insert(90);
    minheap->insert(5);
    minheap->insert(3);
    minheap->insert(10);
    minheap->insert(1);
    minheap->insert(99);
    minheap->insert(210);

    //minheap->print();


    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    minheap->insert(1);
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;
    std::cout << "Minimum of this array is: " << minheap->pop() << std::endl;

    std::cout << "Hello, World!" << std::endl;


    delete minheap;
    return 0;
}