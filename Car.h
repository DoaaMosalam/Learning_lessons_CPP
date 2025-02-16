//
// Created by DoaaM on 2/12/2025.
//

#ifndef CAR_H
#define CAR_H
#include <iostream>
#include<string>
using namespace std;

namespace Car {

class Car {
private:
    string maker;
    int model;
    string color;


public:
    void setMaker(string maker);
    string getMaker();

    void setModel(int model);
    int getModel();

    void setColor(string color);
    string getColor();

};

} // Car

#endif //CAR_H
