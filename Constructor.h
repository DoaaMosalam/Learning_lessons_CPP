//
// Created by DoaaM on 2/16/2025.
//

#ifndef CONSTRUCTOR_H
#define CONSTRUCTOR_H
# include <iostream>
using namespace std;


namespace Regtangle {
    class Regtangle {
    private:
        float width;
        float height;

    public:
        // Constructor
        // Regtangle() {
        //     width = 5.5;
        //     height = 6.6;
        //     cout << "The width is: " << width << " and the height is: " << height << endl;
        // }
        //==============================================
        /*
         * onther way to initialize the constructor
         *
         */
        // Regtangle(): width(5.5), height(6.6) {
        //     cout << "The width is: " << width << " and the height is: " << height << endl;
        // }

        //=========================================================
        /*
         * another way to initialize the constructor
         * by passing the values to the constructor
         */
        Regtangle(float wid, float heg): width(wid), height(heg) {
            cout << "The width is: " << width << " and the height is: " << height << endl;
        }

        void setWidth(int w);

        int getWidth();

        void setHeight(int h);

        int getHeight();
    };
} // Regtangle

#endif //CONSTRUCTOR_H
