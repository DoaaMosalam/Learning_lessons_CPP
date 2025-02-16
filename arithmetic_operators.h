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
namespace arithmetic_operators {

    class arithmetic_operators {
        private :
            int x;
        int y;
    public:
            // arithmetic_operators(int x, int y)
            //     : x(x),
            //       y(y) {
            // }

        void setX(int x);
        int getX();

        void setY(int y);
        int getY();


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
}
