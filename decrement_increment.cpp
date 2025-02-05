//
// Created by DoaaM on 1/27/2025.
//
#include <iostream>
using namespace std;
/*
 * Arthimetic operators
 * +, -, *, /, %
 */
void arthimetic_operators() {
   int a = 10;
   int b = 20;
   cout << "x + y = " << a + b << endl;
   cout << "x - y = " << a - b << endl;
   cout << "x * y = " << a * b << endl;
   cout << "x / y = " << a / b << endl;
   cout << "x % y = " << a % b << endl;
}
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

// int main() {
//    decrement_increment();
//    arthimetic_operators();
//    return 0;
// }
