//
// Created by nerdo on 3/2/19.
//

#ifndef MINHEAPS_NODE_H
#define MINHEAPS_NODE_H
#include <iostream>

class Node {
private:
    int value;
    Node* right;
    Node* left;
public:
    Node(int);
    Node(Node*);
    Node* getLeft();
    Node* getRight();
    void addRight(Node*);
    void addLeft(Node*);
    void deleteLeft();
    void deleteRight();
    void deleteNode();

    //test
    void print();

};


#endif //MINHEAPS_NODE_H
