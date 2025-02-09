//
// Created by DoaaM on 2/9/2025.
//

#ifndef ARRAYS_H
#define ARRAYS_H
#include <iostream>
using namespace  std;



class Arrays {

    // int arr[arr_size] ={100,200,350,460,500,660,700,810,900};
public:
    void printArray() {
        int arr_size = 10;
        int arr[arr_size] ={100,200,350,460,500,660,700,810,900,1000,2000};
        /*
         * print all elements of an array
         */
        for(int i =0;i<= arr_size;i++) {
            cout<< arr[i] << endl;
        }
    }

    /*
     * user enter the size of the array and the elements of the array
     * then print all elements of the array
     */

    void enterArray() {
        int arr_size;
        cout<<"Enter the size of the array: ";
        cin >> arr_size;
        int arr[arr_size];
        cout<<"Enter the elements of the array: ";
        for(int i =0;i<arr_size;i++) {
            cin >> arr[i];
        }
        for(int i =0;i<arr_size;i++) {
            cout<< arr[i] << endl;
        }
    }

    /*
     * Reverse the array
     */
    void reverseArray() {
        int arr_size = 10;
        int arr[arr_size] ={100,200,350,460,500,660,700,810,900,1000,2000};
        for(int i = arr_size-1;i>=0;i--) {
            cout<< arr[i] << endl;
        }
    }



    /*
     * arihtmetic operations on array
     * 1- add two arrays
     * 2- subtract two arrays
     * 3- multiply two arrays
     * 4- divide two arrays
     */
    void addTwoArrays() {
        int arr1[5] = {1,2,3,4,5};
        int arr2[5] = {6,7,8,9,10};
        int arr3[5];
        for(int i =0;i<5;i++) {
            arr3[i] = arr1[i] + arr2[i];
            cout<< arr3[i] << endl;
        }
    }
    void subtractionArray() {
        int arr1[5] = {1,2,3,4,5};
        int arr2[5] = {6,7,8,9,10};
        for (int i = 0; i<=5 ;i++) {
            arr1[i] = arr1[i] - arr2[i];
            cout<< arr1[i] << endl;
        }
    }
    void multiplyArray() {
        int arr1[5] = {1,2,3,4,5};
        int arr2[5] = {6,7,8,9,10};
        for (int i = 0; i<=5 ;i++) {
            arr1[i] = arr1[i] * arr2[i];
            cout<< arr1[i] << endl;
        }
    }
    void divideArray() {
        int arr1[5] = {1,2,3,4,5};
        int arr2[5] = {6,7,8,9,10};
        for (int i = 0; i<=5 ;i++) {
            arr1[i] = arr1[i] / arr2[i];
            cout<< arr1[i] << endl;
        }
    }




};



#endif //ARRAYS_H
