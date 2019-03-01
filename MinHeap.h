//
// Created by nerdo on 3/2/19.
//

#ifndef MINHEAPS_MINHEAP_H
#define MINHEAPS_MINHEAP_H
#include "Node.h"
#include <iostream>
class MinHeap {
private:
    Node* root;
public:
    MinHeap();
    MinHeap(Node*);
    void insert(Node* );
};


#endif //MINHEAPS_MINHEAP_H
