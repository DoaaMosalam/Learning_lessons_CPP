#include <iostream>

#include "data_types.h"
#include "arithmetic_operators.h"
#include "ComparisonOperators.h"
#include "ControlStatement.h"
#include "decrement_increment.h"
#include "Repetition_Statement.h"


using namespace std;

int main() {
    // arithmetic_operators result;
    // result.operators();
    // result.operators_asigment();

    // decrement_increment_Opreations obj;
    // obj.decrement_increment();

    // data_types data;
    // data.dataTypes();

    // ComparisonOperator :: ComparisonOperators comp;
    // comp.comporsionOperators();

    ControlStatement::ControlStatement control;
    // control.evenOrOdd();
    // control.gradeOfStudents();
    // control.positiveOrNegative();
    Repetiton_Statement::Repetiton_Statement rep;
    rep.whileLoop();
    rep.forLoop();

    return 0;
}