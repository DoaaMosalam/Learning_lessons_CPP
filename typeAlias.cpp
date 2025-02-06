#include <iostream>
#include <limits.h>
using namespace std;

void typeAlias() {
    int age = 300;
    cout << sizeof(age) << endl; // 4 bytes

    short int new_age = 300;
    cout << sizeof(new_age) << endl; // 2 bytes

    cout <<sizeof(short int) << endl; // 2 bytes
    cout <<sizeof(long int) << endl; // 4 bytes
    cout <<sizeof(long) << endl; // 4 bytes
    cout <<sizeof(long long) << endl; // 8 bytes
    cout <<sizeof(long long int) << endl;  // 8 bytes
    /*
     * Signed[int,char]
     * short positive, Negative Integers And 0
     * int is signed by defualt
     *============================
     * unsigned[int,char]
     * store only positive integers and 0
     */
    signed num_signed = 100;
    cout<< "Number is signed is"<< num_signed << endl; // 100
    cout << sizeof(num_signed) << endl; // 4 bytes

    signed num_Negative_signed = -100;
    cout<< " Negative Number is signed is"<< num_Negative_signed << endl; // -100
    cout << sizeof(num_Negative_signed) << endl; // 4 bytes

    unsigned num_unsigned =100;
    cout <<"Numbet is Ugined is:"<< num_unsigned << endl; // 100
    cout << sizeof(num_unsigned) << endl; // 4 bytes

    unsigned num_Negative_unsigned = -100;
    cout << num_Negative_unsigned << endl; // 4294967196


/*
 * type alias is a feature that allows programmers to create a new name for an existing type
 * type alias is created using the typedef keyword
 * typedef is used to give a type a new name
 * using identifier = type;
 * typedef type identifier; unsigned long ul;
 */
    using bignum = long long int;
    bignum num = 1000000000000000000;
    cout <<  num << endl;
    //========================================
    typedef  long long int bignum;
    bignum num2 = 1000000000000000000;
    cout << num2 << endl;
}

int main() {
    typeAlias();
    return 0;
}
