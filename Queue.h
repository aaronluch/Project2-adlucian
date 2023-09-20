/**
 * Aaron Luciano
 * CS2240
 * Section A
 * 9-20-2023
 * Project 2
 * Queue Class
 */

#ifndef CS2240_PROJECT_1_QUEUE_H
#define CS2240_PROJECT_1_QUEUE_H

#include "Node.h"
#include <iostream>

using std::cout, std::endl;

/*
 * Queue Class
 * All Nodes will point behind (in queue)
 */

template<typename Object>
class Queue{
private: Node<Object>* front; // pointer to front of queue
         Node<Object>* back; // pointer to back of queue

public:
    // constructor
    Queue(){
        front = nullptr;
        back = nullptr;
    }

    // deconstructor to be called when an object is finished
    ~Queue(){
        while(front != nullptr){
            dequeue();
        }
        cout << "No memory leaks." << endl;
    }

    // enqueue (push a value to the back of the queue)
    void enqueue(Object item){
        // store item in a node in heap memory
        Node<Object>* newNodePtr = new Node<Object>(item);
        // if the queue is empty, both front and back need to point to the new node
        if (back == nullptr){
            front = newNodePtr;
            back = newNodePtr;
        }
        else{
            newNodePtr->setNext(back);
            back = newNodePtr;
        }
    }

    // dequeue (removes value from the front of the queue and returns object)
    Object dequeue(){
        // check to see if there's an object to dequeue
        if(front == nullptr){
            return Object();
        }
        // create a copy to be returned
        Object item = front -> getItem();
        // front pointer should become next in queue to be dequeued
        Node<Object>* frontNode = front;
        front = front->getNext();
        // remove front-most node from memory
        delete frontNode;

        return item;
    }

    // search for an item in the queue
    // return true if found, false otherwise
    bool search(Object item) const{
        Node<Object>* frontCopy = front;
        while (frontCopy != nullptr){
            if (frontCopy -> getItem() == item){
                return true;
            }
            frontCopy = frontCopy -> getNext(); // front copy goes to next object and continues search
        }
        return false;
    }

    // print all values in the queue
    void print() const{
        cout << "Front of Queue" << endl;
        Node<Object>* curr = front;
        while (curr != nullptr){
            cout << curr -> getItem() << endl;
            curr = curr -> getNext();
        }
        cout << "End of Queue" << endl;
    }
};

#endif //CS2240_PROJECT_1_QUEUE_H
