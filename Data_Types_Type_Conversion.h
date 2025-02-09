//
// Created by DoaaM on 2/9/2025.
//

#ifndef DATA_TYPES_TYPE_CONVERSION_H
#define DATA_TYPES_TYPE_CONVERSION_H

#include <iostream>
using namespace std;

class Data_Types_Type_Conversion {
public:
    void typeConversion(){
        // type conversion
        // implicit type conversion
        int x = 10;
        float y = x;
        cout << "y is " << y << endl;
        // explicit type conversion
        float z = 10.5;
        int w = (int) z;
        cout << "w is " << w << endl;
        // c++ style type conversion
        int m = int(z);
        cout << "m is " << m << endl;
        // c style type conversion
        int n = (int) z;
        cout << "n is " << n << endl;

    }


};



#endif //DATA_TYPES_TYPE_CONVERSION_H
