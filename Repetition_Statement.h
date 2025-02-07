//
// Created by DoaaM on 2/7/2025.
//

#ifndef REPETITON_STATEMENT_H
#define REPETITON_STATEMENT_H
#include<iostream>


namespace Repetiton_Statement {
    using namespace std;

class Repetiton_Statement {
public:
/*
 * while loop is a control flow statement that allows code to be executed
 * repeatedly based on a given boolean condition.
 * The while loop can be thought of as a repeating if statement.
 */
    void whileLoop() {
        int i = 0;
        while (i < 5) {
            cout << i << endl;
            i++;
        }
    }
    /*for loop
     * for loop is a control flow statement for specifying iteration,
     * which allows code to be executed repeatedly.
     * A for loop is classified as an entry-controlled loop.
     */
    void forLoop() {
        for(int i=0;i<=5;i++) {
            cout<< i << endl;
        }

    }
    void doWhileLoop() {
        int i = 0;
        do {
            cout << i << endl;
            i++;
        } while (i < 5);
    }

};

} // Repetiton_Statement

#endif //REPETITON_STATEMENT_H
