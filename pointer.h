//
// Created by DoaaM on 2/11/2025.
//

#ifndef POINTER_H
#define POINTER_H
#include <iostream>
using namespace std;



class pointer {
public:
    static void printPointer() {

        int i =17;
        int *ptr;
        ptr = &i;
        cout << "The value of i is: " << i << endl;
        cout << "Addres value i is: " <<&i<<endl;
        cout << "The value of is: " << *ptr <<endl;
        cout << "The address of i is: " << &ptr <<endl;
    }

    static void pointerWithArray() {
        char msg[] = "Hello";
        cout << "The value of msg is: " << msg << endl;
        cout << "The address of msg is: " << &msg << endl;
        char *ptr;
        ptr = msg;
        *ptr = 'D';
        ptr++;
        *ptr='o';
        ptr ++;
        *ptr = 'a';
        ptr++;
        *ptr = 'a';
        cout<< "The value of msg is: " << msg << endl;

    }

    static void printPointerWithArray() {
        int list[] = {10,20,30,40,50};
        int *ptr;
        for (int i=0;i<=4;i++) {
            cout << *(list +i) << endl;
        }
    }
/*
 * pointer as function
 *
 */
    static void swap(double *ptr1,double *ptr2) {
        double temp;
        temp = *ptr1;
        *ptr1 = *ptr2; //de-referencing
        *ptr2 = temp;


    }




};



#endif //POINTER_H
