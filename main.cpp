#include <iostream>

#include "data_types.h"
#include "arithmetic_operators.h"
#include "Arrays.h"
#include "ComparisonOperators.h"
#include "ControlStatement.h"
#include "decrement_increment.h"
#include "Repetition_Statement.h"
#include "Scope_of_variable.h"


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
    // ComparisonOperator :: ComparisonOperators comp;
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
    arrays.reverseArray();
    // arrays.addTwoArrays();
    // arrays.subtractionArray();
    // arrays.multiplyArray();
    //===============================================================================




    return 0;
}