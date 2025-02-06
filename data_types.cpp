//
// Created by DoaaM on 1/27/2025.
//
#include <iostream>
using namespace std;
void data_types(){
    // data types
    // intergers data types
    int x = 10;
    cout << "x is " << x << endl;
    cout << "size of x is " << sizeof(x) << endl; // size of x in bytes 4
    // float data types
    float y = 10.5;
    cout << "y is " << y << endl;
    cout << "size of y is " << sizeof(y) << endl; // size of y in bytes 4
    // double data types
    double z = 10.5;
    cout << "z is " << z << endl;
    cout << "size of z is " << sizeof(z) << endl; // size of z in bytes 8
    // char data types
    char c = 'A';
    cout << "c is " << c << endl;
    cout << "size of c is " << sizeof(c) << endl; // size of c in bytes 1
    // boolean data types
    bool b = true;
    cout << "b is " << b << endl;
    cout << "size of b is " << sizeof(b) << endl; // size of b in bytes 1
    // string data types
    string s = "Doaa Mosalam";
    cout << "s is " << s << endl;
    cout << "size of s is " << sizeof(s) << endl; // size of s in bytes 24
    // long data types
    long l = 1000000000;
    cout << "l is " << l << endl;
    cout << "size of l is " << sizeof(l) << endl; // size of l in bytes 8

    cout << &x << endl; // memory address

}
// int main() {
//     data_types();
//     return 0;
// }