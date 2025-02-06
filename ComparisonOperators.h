//
// Created by DoaaM on 2/6/2025.
//

#ifndef COMPARISONOPERATORS_H
#define COMPARISONOPERATORS_H
#include <iostream>
#include "ComparisonOperators.h"
using namespace std;

namespace ComparisonOperator {
    /*
  * Comparison Operators
  * less than (<)
  * greater than (>)
  * less than or equal to (<=)
  * greater than or equal to (>=)
  * equal to (==)
  * not equal to (!=)
  *
  */


class ComparisonOperators {
public:
    static void comporsionOperators() {
         // Comparison Operators
         int x = 10;
         int y = 20;
         cout << "x < y is " << (x < y) << endl;
            cout << "x > y is " << (x > y) << endl;
         cout << "x <= y is " << (x <= y) <<endl;
            cout << "x >= y is " << (x >= y) << endl;
         cout<< "x == y is " << (x == y) << endl;
            cout << "x != y is " << (x != y) << endl;





    }

};

} // ComparisonOperator

#endif //COMPARISONOPERATORS_H
