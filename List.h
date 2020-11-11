/**
 * @file List.h
 * CRN 3031 demo
 *      @brief
 *      This file contains function declarations for the list functionality
 *      @author Jeff Munoz
 *      @version .02 11/5/2020
 */


#ifndef LINKEDLISTS_LIST_H
#define LINKEDLISTS_LIST_H


#include "node.cpp"
#include <iostream>

using namespace std;

class List {
private:
    node *front;
    node *rear;
    int size;
    int hold;
public:
    List();

    void insert_front(int data);

    void insert_rear(int data);

    int remove_front_i();

    int remove_rear_i();

    int ListSize();

    void print();

};


#endif //LINKEDLISTS_LIST_H
