/**
 * @file main.ccp
 * CRN 3031 demo
 *      @brief
 *
 *      Code for c++ demo of a double linked list for use in educational purposes in understanding how to better use
 *      Git and GitHub, how a merge is done, branching, and conflict resolution.
 *
 *      @author Dalton Senseman
 *      @version .01 11/5/2020
 */
#include "List.h"
#include <iostream>
using namespace std;

int main() {
    List testList; // creates the list object
    int tempInt;
// test cases for integers
    testList.remove_front_i(); // attempting to remove from the front of an empty list
    testList.remove_rear_i(); // attempting to remove from the end of an empty list
    testList.insert_front(15);
    testList.insert_rear(5);
    testList.insert_rear(8);
    testList.print();
    testList.insert_rear(9);
    testList.insert_rear(26);
    testList.insert_rear(63);
    testList.print();
    tempInt = testList.remove_rear_i();
    cout << "The integer removed was " << tempInt << endl;
    testList.insert_front(32);
    testList.print();
    testList.insert_front(-5003);
    testList.print();
    tempInt = testList.remove_rear_i();
    cout << "The integer removed was " << tempInt << endl;
    tempInt = testList.remove_front_i();
    cout << "The integer removed was " << tempInt << endl;
    testList.print();
    testList.ListSize();

}
