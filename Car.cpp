//
// Created by DoaaM on 2/12/2025.
//

#include "Car.h"
#include <iostream>
#include<string>
using namespace std;


namespace Car {
    void Car::setMaker(string maker) {
        maker = maker;

    }

    string Car::getMaker() {
        return maker;
    }

    void Car::setModel(int model) {
        model = model;
    }

    int Car::getModel() {
        return model;
    }

    void Car::setColor(string color) {
        color = color;
    }

    string Car::getColor() {
        return color;
    }

} // Car