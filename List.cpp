/**
 * @file List.ccp
 * CRN 3031 demo
 *      @brief
 *      This file contains the function definitions for the list header file
 *      @author Jeff Munoz
 *      Doxygen comments: Dalton Senseman
 *      @version .02 11/5/2020
 */

#include "List.h"

/**
 * @brief sets up the empty list constructor with no elements.
 * @bug none known
 */
List::List() {
    front = NULL;
    rear = NULL;
    size = 0;
    hold = 0;
}

/**
 * @brief adds a new node to the front of the linked list setting the data into the node.
 * @param data int value to bve placed into the p-> data container inside the node.
 * @bug none known
 */
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

    cout << "Inserted new data in the front of the list."<< endl;

}
/**
 * @brief adds a new node to the front of the linked list setting the data into the node.
 * @param *data is a void pointer
 * @bug none known
 */
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
/**
 * @brief remove the head of the linked list that uses int datatype.
 * @return hold which is the data that the head contained if there was not head to remove then it returns 0.
 * @bug none known
 */
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
/**
 * @brief remove the head of the linked list that uses int datatype.
 * @return temphold which is the pointer of data that the head contained if there was not head to remove then it
 * returns NULL.
 * @bug none known
 */
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
/**
 * @brief adds a new node to the end(tail) of the linked list to be populated.
 * @param data an int data type to be placed in the tail of the list
 * @bug none known
 */
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
/**
 * @brief adds a new node to the end(tail) of the linked list to be populated.
 * @param data an pointer data type to data to be placed in the tail of the list
 * @bug none known
 */
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
/**
 * @brief removed the rear(tail) of the linked list
 * @return hold = 0 if list is empty else returns the value of the removed item.
 * @bug none known
 */
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
/**
 * @brief removed the rear(tail) of the linked list
 * @return temphold = NULL if list is empty else returns the pointer value of the removed item.
 * @bug none known
 */
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
/**
 * @brief grabs the current size of the linked list
 * @return size the number of items in the list.
 * @bug none known.
 */
int List::ListSize() {
    cout << "The Double-linked list is " << size << " items long." << endl;
    return size;
}
/**
 * @brief prints the entire contents of a linked list in a comma separated list.
 * @bug none known.
 */
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


