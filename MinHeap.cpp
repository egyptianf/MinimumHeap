//
// Created by nerdo on 3/2/19.
//

#include "MinHeap.h"
MinHeap::MinHeap() {
    root = new Node(0);
}
MinHeap::MinHeap(Node* root) {
    this->root = root;
}
void MinHeap::insert(Node * newNode) {
    if(root->getLeft() == NULL)
        root->addLeft(newNode);
    else if(root->getRight() == NULL)
        root->addRight(newNode);
    else
        insert(newNode->getLeft());
}