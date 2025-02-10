//
// Created by DoaaM on 2/10/2025.
//

#ifndef EXERCISES_H
#define EXERCISES_H
#include <iostream>
#include <string>
using namespace std;

/*Write a program that used tp manage The HR data of adepartment that has a team of 5 employees.
 * The employee data like (eno, ename,job,salary,bonus). The program should have
 * 1. Function to accept the data of employees and automatically set the salary according to the folowing formulas in case
 *     job = ;Manager; -> salary = 5000
 *     job='Engineer' -> salary = 3000
 *     job='Clerck' -> salary = 2000
 *     Otherwise -> salary =1000
 *
 * 2. Function to set the bonus value for a specific employee accorrding to specific parent.
 *
 * 3. Function to print out the data of all employees.
 *
 */

class Exercises {
public:
    struct Employees {
        int eNo;
        string name;
        string job;
        float salary;
        float bonus;
        float total_salary = salary + bonus;

    };
    void get_data(Employees list[], int size) {
        for(int i = 0; i<=size;i++) {
            cout<<"Enter the employee number, name, job for employee: "<< i+1 <<endl;

            cin >> list[i].eNo >> list[i].name >> list[i].job;
            if (list[i].job == "Manager") {
                list[i].salary = 5000;
            } else if (list[i].job == "Engineer") {
                list[i].salary = 3000;
            } else if (list[i].job == "Clerk") {
                list[i].salary = 2000;
            } else {
                list[i].salary = 1000;
            }
        }
    }

    // void set_bonues(Employees &emp, float precent) {
    //     emp.bonus = emp.salary * precent;
    // }
    void set_bonues(Employees list[],int size, float precent) {
        for (int i=0;i<size;i++) {
            list[i].bonus = list[i].salary * precent;
        }
    }

    void printAllEmployees(Employees list[],int size) {
        for (int i=0;i<size;i++) {
            cout <<"Emp No = " << list[i].eNo << endl;
            cout <<"Emp Name = " << list[i].name << endl;
            cout <<"Emp Job = " << list[i].job << endl;
            cout <<"Emp Salary = " << list[i].salary << endl;
            cout <<"Emp Bonus = " << list[i].bonus << endl;
            cout <<"Emp Total Salary = " << list[i].total_salary << endl;
            cout << "***************************************************" << endl;

        }
    }





    // struct Employees {
    //     int eNo;
    //     string name;
    //     string job;
    //     float salary;
    //     float bonus;
    //     float total_salary = salary + bonus;
    //
    //     Employees data_list[5];
    //
    // };
    //
    // void get_data(Employees list[], int size) {
    //     for(int i = 0; i<=size;i++) {
    //         cout<<"Enter the employee number, name, job: "<<endl;
    //
    //         cin >> list[i].eNo >> list[i].name >> list[i].job;
    //         // using switch case to set the salary according to the job
    //         switch (list[i].job) {
    //             case "Manager":
    //                 list[i].salary = 5000;
    //                 break;
    //             case "Engineer":
    //                 list[i].salary = 3000;
    //                 break;
    //             case "Clerk":
    //                 list[i].salary = 2000;
    //                 break;
    //             default:
    //                 list[i].salary = 1000;
    //         }
    //     }
    // }
    //
    // void set_bonues(Employees emp, float precent) {
    //     emp.bonus = emp.salary * precent;
    // }
    //
    // void printAllemployees(Employees data_list,int size) {
    //     for (int i=0;i<size;i++) {
    //         cout <<"Emp No = " << data_list[i].eNo << endl;
    //         cout <<"Emp Name = " << data_list[i].name << endl;
    //         cout <<"Emp Job = " << data_list[i].job << endl;
    //         cout <<"Emp Salary = " << data_list[i].salary << endl;
    //         cout <<"Emp Bonus = " << data_list[i].bonus << endl;
    //         cout <<"Emp Total Salary = " << data_list[i].total_salary << endl;
    //
    //         cout << "==============================" << endl;
    //
    //     }
    // }



};


#endif //EXERCISES_H
