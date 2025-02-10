//
// Created by DoaaM on 2/10/2025.
//

#ifndef STRUCT_H
#define STRUCT_H
#include <iostream>
using namespace  std;



class struct_operators {
public:
    struct employe {
        int id;
        string fname;
        string lname;
        float salary;
        float bonus;
        float net_salary;
    };
     void printInfo() {
         employe el;
         el.id = 16184;
         el.fname="Doaa";
         el.lname="Mosalam";
         el.salary=4000;
         el.bonus=500;
            el.net_salary=el.salary+el.bonus;
            cout<<"Employe ID: "<<el.id<<endl;
         cout<<"Employe Name: "<<el.fname<<" "<<el.lname<<endl;
            cout<<"Employe Salary: "<<el.salary<<endl;
         cout<<"Employe Bonus: "<<el.bonus<<endl;
            cout<<"Employe Net Salary: "<<el.net_salary<<endl;
     }
//====================================================================================================================
/*
 * struct with function
 */
    struct distance_type {
        int feet;
        float inches;
    };
    distance_type add_distance(distance_type dt1, distance_type dt2) {
        distance_type result;
        result.feet = dt1.feet + dt2.feet;
        result.inches = dt1.inches + dt2.inches;
        return result;

    }
    //=====================================================
    /*
     * struct with array
     *
     */
    struct student {
        int id_student;
        string name;
        int marks[5];
    };
    void printStudent() {
        student s;
        s.id_student = 16184;
        s.name = "Doaa";
        s.marks[0] = 90;
        s.marks[1] = 80;
        s.marks[2] = 70;
        s.marks[3] = 60;
        s.marks[4] = 50;
        cout << "Student ID: " << s.id_student << endl;
        cout << "Student Name: " << s.name << endl;
        cout << "Student Marks: " << s.marks[0] << " " << s.marks[1] << " " << s.marks[2] << " " << s.marks[3] << " "
             << s.marks[4] << endl;
    }
    //=====================================================
    struct Employee {
        int id;
        string fname;
        string lname;
        float salary;
        float bonus;
        float net_salary;
    };
    void printAllDataEmployee() {
        Employee data[5];
        data[0].id = 16184;
        data[0].fname = "Doaa";
        data[0].lname = "Mosalam";
        data[0].salary = 4000;
        data[0].bonus = 500;
        data[0].net_salary = data[0].salary + data[0].bonus;

        cout<<"Employee ID: "<<data[0].id<<endl;
        cout<<"Employee Name: "<<data[0].fname<<" "<<data[0].lname<<endl;
        cout<<"Employee Salary: "<<data[0].salary<<endl;
        cout<<"Employee Bonus: "<<data[0].bonus<<endl;
        cout<<"Employee Net Salary: "<<data[0].net_salary<<endl;
    }


};



#endif //STRUCT_H
