/**
 * Aaron Luciano
 * CS2240
 * Section A
 * 9-20-2023
 * Project 2
 * Stack Class
 */

#ifndef CS2240_PROJECT_1_STACK_H
#define CS2240_PROJECT_1_STACK_H

#include "Node.h"
#include <iostream>

using std::cout, std::endl;

/*
 * Stack Class
 * All Nodes will point to the Node below
 */

template<typename Object>
class Stack{
private: Node<Object>* top;

public:
    // constructor
    Stack(){
        top = nullptr;
    }

    //deconstructor to be called at end of object lifetime
    ~Stack(){
        while(top != nullptr){
            pop();
        }
        cout << "No memory leaks." << endl;
    }

    // push (add a value to top of stack)
    void push(Object item){
        // store the item in a node in heap memory
        Node<Object>* newNodePtr = new Node<Object>(item);
        // have the new node point to the top
        newNodePtr -> setNext(top);
        // the new node becomes top
        top = newNodePtr;
    }

    // pop (removes value from top of stack)
    // returns what was popped
    Object pop(){
        // check if there's something that can be popped
        if(top == nullptr){
            return Object();
        }
        // create a copy of the value to be returned
        Object item = top->getItem();
        Node<Object>* topCopy = top;
        top = top -> getNext();
        delete topCopy;
        return item;
    }

    // search for an item in the stack
    // return true if in stack, false otherwise
    bool search(Object item) const{
        Node<Object>* topCopy = top;
        while (topCopy != nullptr){
            if (topCopy -> getItem() == item){
                return true;
            }
            topCopy = topCopy -> getNext();
        }
        return false;
    }

    // print all values in the stack
    void print() const{
        cout << "Top of Stack" << endl;
        Node<Object>* curr = top;
        while (curr != nullptr){
            cout << curr -> getItem() << endl;
            curr = curr -> getNext();
        }
        cout << "Bottom of Stack" << endl;
    }
};

#endif //CS2240_PROJECT_1_STACK_H
