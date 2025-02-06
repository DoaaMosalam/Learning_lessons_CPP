//
// Created by DoaaM on 2/6/2025.
//

#ifndef ARTHIMETIC_OPERATORS_H
#define ARTHIMETIC_OPERATORS_H
#include <iostream>

#endif //ARTHIMETIC_OPERATORS_H

using namespace std;
/*
 * Arthimetic operators
 * +, -, *, /, %
 */
class arithmetic_operators {
public:
    static void operators() {

        int a = 10;
        int b = 20;
        cout << "x + y = " << a + b << endl;
        cout << "x - y = " << a - b << endl;
        cout << "x * y = " << a * b << endl;
        cout << "x / y = " << a / b << endl;
        cout << "x % y = " << a % b << endl;
    }

    static void operators_asigment() {
        cout<<"=======================================" << endl;
        int a = 10;
        int b = 20;
        cout << "x += y = " << a + b << endl;
        cout << "x -= y = " << a - b << endl;
        cout << "x *= y = " << a * b << endl;
        cout << "x /= y = " << a / b << endl;
        cout << "x %= y = " << a % b << endl;
    }

};
