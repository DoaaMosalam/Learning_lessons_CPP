//
// Created by DoaaM on 2/6/2025.
//

#ifndef DECREMENT_INCREMENT_H
#define DECREMENT_INCREMENT_H
#include <iostream>

#endif //DECREMENT_INCREMENT_H
using namespace std;
class decrement_increment_Opreations {
    public:
    /*
 * decrement and increment operators
 * ++, --
 * pre increment, post increment, pre decrement, post decrement
 */
    void decrement_increment() {

        // post increment
        int x =100;
        cout << "x is " << x << endl;
        cout<<"post increment x is "<<x++<<endl;

        //pre increment
        cout<<"pre increment x is "<<++x<<endl;

        //post decrement
        cout<<"post decrement x is "<<x--<<endl;
        // pre decrement
        cout<<"pre decrement x is "<<--x<<endl;
    }


};