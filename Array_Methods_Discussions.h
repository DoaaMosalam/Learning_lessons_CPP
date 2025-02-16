//
// Created by DoaaM on 2/15/2025.
//

#ifndef ARRAY_METHODS_DISCUSSIONS_H
#define ARRAY_METHODS_DISCUSSIONS_H
#include <array>
#include <iostream>
using namespace std;


class Array_Methods_Discussions {
public:
    void printArray() {
        array<int,4> nums = {100, 200, 300, 400};

        /*
         * at function is used to access the element at a specific position in the array.
         */
        cout<< "The element of array at 2 is: "<<  nums.at( 2) << endl; // 300

        cout<< "The element of array index 2 is: "<< nums[ 2] << endl; // 300
        // front function is used to access the first element in the array.
        cout<< "The element of array in front array is: "<<nums.front() << endl; // 100
        // back function is used to access the last element in the array.
        cout<<"The element of array in back array is: "<< nums.back() << endl;  // 400
        // data function is used to access the first element in the array.
        cout<< "first element in the array" <<*nums.data() << endl; // 100
        // size function is used to get the size of the array.
        cout<<nums.empty()<<endl; // 0
        cout << "The size of the array is: " << nums.size() << endl; // 4
        // fill function is used to fill the array with a specific value.
        cout << "The array after filling with 10 is: " << endl;
        nums.fill(10);
    }


};



#endif //ARRAY_METHODS_DISCUSSIONS_H
