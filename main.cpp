#include <iostream>

#include "data_types.h"
#include "arithmetic_operators.h"
#include "Arrays.h"
#include "ComparisonOperators.h"
#include "ControlStatement.h"
#include "decrement_increment.h"
#include "Exercises.h"
#include "pointer.h"
#include "Repetition_Statement.h"
#include "Scope_of_variable.h"
#include "struct_operators.h"
#include "TwoDimensional_Array.h"


using namespace std;

int main() {
    // arithmetic_operators result;
    // result.operators();
    // result.operators_asigment();
    //===============================================================================
    // decrement_increment_Opreations obj;
    // obj.decrement_increment();
    //===============================================================================
    data_types data;
    // data.dataTypes();
    //===============================================================================
    ComparisonOperator :: ComparisonOperators comp;
    // comp.comporsionOperators();
    //===============================================================================
    ControlStatement::ControlStatement control;
    // control.evenOrOdd();
    // control.gradeOfStudents();
    // control.positiveOrNegative();
    // Repetiton_Statement::Repetiton_Statement rep;
    // rep.whileLoop();
    // rep.forLoop();
    //===============================================================================
    Scope_of_variable scope;
    // cout << scope.localvariable() << endl;
    // cout << scope.globalvariable() << endl;
    // scope.scope();

    // string name;
    // scope.issue_ticket(125,name);
    // cout<<"Enter Your name as written in your password: "<< endl;
    // cin >> name;
    // scope.issue_ticket(125,name);
    // cout<<"Enter Your name as written in your password: "<< endl;
    // cin >> name;
    // scope.issue_ticket(125,name);
    //===============================================================================
    Arrays arrays;
    // arrays.printArray();
    // arrays.enterArray();
    // arrays.reverseArray();
    // arrays.addTwoArrays();
    // arrays.subtractionArray();
    // arrays.multiplyArray();
    //===============================================================================
    TwoDimensional_Array twoD;
    // twoD.printTwoDArray();
    //===============================================================================
    struct_operators struct_operators;
    // cout<< "The employee information is: "<<endl;
    // struct_operators.printInfo();

    //  struct_operators::distance_type x, y ,z;
    //  cout<<"Enter the feet and inches for the 1st distance: "<<endl;
    // cin >> x.feet >> x.inches;
    //  cout<<"Enter the feet and inches for the 2st distance: "<<endl;
    //  cin >> y.feet >> y.inches;
    //
    //  z = struct_operators.add_distance(x,y);
    //  cout<<z.feet <<"         "<<z.inches<<endl;

    // struct_operators.printStudent();
    // struct_operators.printAllDataEmployee();
    //======================================================================
    pointer pointer;
    // pointer.printPointer();
    // pointer.pointerWithArray();
    // pointer.printPointerWithArray();

    double x = 10.5, y = 20.5;
    cout<<"Before swapping: "<<endl;
    cout<<"x = "<<x<<", y = "<<y<<endl;
    pointer.swap(&x,&y);
    cout<<"After swapping: "<<endl;
    cout<<"x = "<<x<<", y = "<<y<<endl;

    //======================================================================
   // Exercises exercises;
   //  Exercises::Employees list[5];
   //  exercises.get_data(list,5);
   //  exercises.set_bonues(list,5,0.1f);
   //  exercises.printAllEmployees(list,5);


    return 0;
}
