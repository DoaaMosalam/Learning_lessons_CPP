//
// Created by DoaaM on 2/9/2025.
//

#ifndef SCOPE_OF_VARIABLE_H
#define SCOPE_OF_VARIABLE_H


inline string name;
class Scope_of_variable {
public:
    int localvariable() {
        int x = 10;
        return x;
    }
    int y = 20;
    int globalvariable() {

        return y;
    }

/*
 *  :: is the scope resolution operator
 *  it is used to print the global variable
 */
    void scope() {
        int age;
        cout<< "Enter Your name: "<< endl;
        cin >> name;
        cout<< "Enter Your age: "<< endl;
        cin >> age;
        cout<< "Your name is: " << :: name << " and your age is: "<< age << endl;

        /*
         * inner scope
         * the variable x is declared in the inner scope
         */

        {
            string addres;
            cout<< "Enter your addres: " <<endl;
            cin >> addres;
            cout<< "Your addres is: " << addres << endl;
        }
    }
    /*
     * static and automatic variables
     * static variables are declared with the keyword static
     * automatic variables are declared with the keyword auto
     * static variables are initialized only once
     * automatic variables are initialized every time the function is called
     * static variables are stored in the data segment
     * automatic variables are stored in the stack
     */
    void issue_ticket(int fight_no, string pname) {

        static int ticket_no = 0;
        cout<< "Fight number: "<< fight_no << endl;
        cout<<"Ticket No: "<< ++ticket_no << endl;
        cout<< "Passenger name: "<< pname << endl;
    }
};



#endif //SCOPE_OF_VARIABLE_H
