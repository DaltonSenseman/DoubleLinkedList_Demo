/**
 * @file List.ccp
 * CRN 3031 demo
 *      @brief
 *      This file contains the function definitions for the list header file
 *      @author Jeff Munoz
 *      @version .02 11/5/2020
 */

#include "List.h"

List::List() {
    front = NULL;
    rear = NULL;
    size = 0;
    hold = 0;
}

void List::insert_front(int data) {
    node *p = new node;
    p->Data = data;
    p->pntData = NULL;
    if (front == NULL) {// one item
        rear = p;
        front = p;
        p->prev = NULL;
        p->next = NULL;
        size++;
    } else {
        p->next = front;
        p->prev = NULL;
        front = p;
        size++;
    }
}

void List::insert_front(void *data) {
    node *p = new node;
    p->pntData = data;
    p->Data = 0;
    if (front == NULL) {// one item
        rear = p;
        front = p;
        p->prev = NULL;
        p->next = NULL;
        size++;
    } else {
        p->next = front;
        p->prev = NULL;
        front = p;
        size++;
    }
}

int List::remove_front_i() {
    if (front == NULL) {// empty list
        hold = 0;
        cout << "Removing from the front of the list..." << endl;
        cout << "Could not remove because the list is empty" << endl;
    } else if (front == rear) {// one item
        hold = front->Data;
        delete front;
        front = NULL;
        rear = NULL;
        size--;
    } else {//2 or more
        hold = front->Data;
        front = front->next;
        delete front->prev;
        front->prev = NULL;
        size--;
    }
    return hold;
}

void *List::remove_front_p() {
    void *tempHold;
    if (front == NULL) {// empty list
        tempHold = NULL;
        cout << "Removing from the front of the list..." << endl;
        cout << "Could not remove because the list is empty" << endl;
    } else if (front == rear) {// one item
        tempHold = front->pntData;
        delete front;
        front = NULL;
        rear = NULL;
        size--;
    } else {//2 or more
        tempHold = front->pntData;
        front = front->next;
        delete front->prev;
        front->prev = NULL;
        size--;
    }
    return tempHold;
}

void List::insert_rear(int data) {
    node *p = new node;
    p->Data = data;
    p->pntData = NULL;
    if (rear == NULL) {// empty list
        rear = p;
        front = p;
        p->prev = NULL;
        p->next = NULL;
        size++;
    } else {//one or more item in list
        p->prev = rear;
        rear->next = p;
        p->next = NULL;
        rear = p;
        size++;
    }
}

void List::insert_rear(void *data) {
    node *p = new node;
    p->pntData = data;
    p->Data = 0;
    if (rear == NULL) {// one item
        rear = p;
        front = p;
        p->prev = NULL;
        p->next = NULL;
        size++;
    } else {
        p->next = NULL;
        p->prev = rear;
        rear = p;
        size++;
    }
}

int List::remove_rear_i() {
    if (rear == NULL) {// empty list
        hold = 0;
        cout << "Removing from the back of the list..." << endl;
        cout << "Could not remove because the list is empty" << endl;
    } else if (front == rear) {// one item
        hold = rear->Data;
        delete rear;
        front = NULL;
        rear = NULL;
        size--;
    } else {//2 or more
        hold = rear->Data;
        rear = rear->prev;
        delete rear->next;
        rear->next = NULL;
        size--;
    }
    return hold;
}

void *List::remove_rear_p() {
    void *tempHold;
    if (rear == NULL) {// empty list
        tempHold = NULL;
        cout << "Removing from the front of the list..." << endl;
        cout << "Could not remove because the list is empty" << endl;
    } else if (front == rear) {// one item
        tempHold = rear->pntData;
        delete rear;
        front = NULL;
        rear = NULL;
        size--;
    } else {//2 or more
        tempHold = rear->pntData;
        rear = rear->prev;
        delete rear->next;
        rear->next = NULL;
        size--;
    }
    return tempHold;

}

int List::ListSize() {
    cout << "The list is " << size << " items long" << endl;
    return size;
}

void List::print() {
    node *p = front;
//    cout << "The list Contains: ";
    while (p != NULL) {
        if (p->pntData != NULL) {
            cout << p->pntData << ", ";
            p = p->next;
        } else {
            cout << p->Data << ", ";
            p = p->next;
        }
    }
    cout << endl;

}


