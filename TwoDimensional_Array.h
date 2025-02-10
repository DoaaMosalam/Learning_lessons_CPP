//
// Created by DoaaM on 2/10/2025.
//

#ifndef TWODIMENSIONAL_ARRAY_H
#define TWODIMENSIONAL_ARRAY_H
#include <iostream>


using namespace std;

class TwoDimensional_Array {
public:
    void printTwoDArray() {

        int arr[6][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9},
                {10, 11, 12},
                {13, 14, 15},
                {16, 17, 18}
        };

        for(int row=0;row < 6;row++)
            for (int col=0;col < 3;col++)
                cout<<arr[row][col]<<" ";


    }

};



#endif //TWODIMENSIONAL_ARRAY_H
