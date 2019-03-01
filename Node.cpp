//
// Created by nerdo on 3/2/19.
//

#include "Node.h"
Node::Node(int newVal) {
    value = newVal;
    right = NULL;
    left = NULL;
}
Node::Node(Node * newNode) {
    value = newNode->value;
    left = newNode->left;
    right = newNode->right;
}
Node* Node::getLeft() {
    return left;
}
Node* Node::getRight() {
    return right;
}
void Node::addLeft(Node * newLeft) {
    left = newLeft;
}

void Node::addRight(Node * newRight) {
    right = newRight;
}

void Node::deleteLeft() {
    delete left;
    left = NULL;
}
void Node::deleteRight() {
    delete right;
    right = NULL;
}
void Node::deleteNode() {
    std::cout << "This node has no reference any more.\n";
    deleteLeft();
    deleteRight();
    delete this;
}
void Node::print() {
    std::cout << "Value: " << value << std::endl;
    std::cout << "Left value: " << left->value << std::endl;
    std::cout << "Right value: " << right->value << std::endl;
}