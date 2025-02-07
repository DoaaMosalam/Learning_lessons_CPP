//
// Created by DoaaM on 2/7/2025.
//

#ifndef CONTROLSTATEMENT_H
#define CONTROLSTATEMENT_H
#include <iostream>


namespace ControlStatement {
    using namespace std;

    /*
     * control statement  is a statement that determines the flow of control in a program.
     * The control statements are used to cause the flow of control to advance and branch based on changes to the state of a program.
     * if statement is a control statement that allows you to execute some code based on a condition.
     *
     */
class ControlStatement {
public:
    void evenOrOdd() {
        int num;
        cout << "Enter Your integer number: ";
        cin >> num;
        if(num %2 ==0) {
            cout<<"Number "<< num << " is even"<<endl;

        }else {
            cout<<"Number "<< num << " is odd"<<endl;
        }

    }

    static void gradeOfStudents() {
        cout << "Enter Your grade: ";
        int grade;
        cin >> grade;
        if( grade>=90) {
            cout<< "Congruatlation, You have A grade" << endl;
        }else if (grade >=80) {
            cout<< "Congruatlation, You have B grade" << endl;
        }else if (grade >=70) {
            cout<< "Congruatlation, You have C grade" << endl;
    }else if (grade >=60) {
            cout<< "Congruatlation, You have D grade" << endl;
        }else {
            cout<< "Sorry, You have F grade" << endl;
        }
    }
//================================================================================================
    /*
     * switch statement is a control statement that allows a value to change the control of execution.
     * The switch statement is a multiway branch statement.
     */
    void positiveOrNegative() {
        int num;
        cout << "Enter Your integer number: ";
        cin >> num;
        switch (num> 0) {
            case 1:
                cout << "Number "<< num << " is positive"<<endl;
                break;
            case 0:
                cout << "Number "<< num << " is negative"<<endl;
                break;
            default:
                cout<< "Number "<< num << " is zero"<<endl;
        }
    }
    //================================================================================================
    /*
     * do while loop is a control flow statement that executes a block of code at least once,
     * and then repeatedly executes the block, or not, depending on a given condition at the end of the block.
     * The do while loop is an exit-controlled loop.
     */


};

} // ControlStatement

#endif //CONTROLSTATEMENT_H
